#include <iostream>
#include <thread>
#include <queue>
#include <mutex>
#include <thread>
#include "ConcurrentVector.h"


using namespace std;

ConcurrentVector list;
int c = 0;
bool done = false;
queue<int> goods;
mutex mu;
condition_variable cond;

void threadToVector() {
	for (int i = 0; i < 10; i++) {
		list.add(i);
	}	
}

void producer() {
	unique_lock<mutex> locker(mu);
	for (int i = 0; i < 500; ++i) {
		goods.push(i);
		c++;
		cond.wait(locker);
	}
	locker.unlock();
	done = true;
}

void consumer() {

	while (!done) {
		while (!goods.empty()) {
			unique_lock<mutex> locker(mu);
			goods.pop();
			c--;
			cond.notify_one();
			locker.unlock();
		}
	}
}

int main() {
	cout << "Thread 1 adding to Vector: " << endl;
	thread t1(threadToVector);
	t1.join();
	cout << endl;

	cout << "Main adding to Vector: " << endl;
	for (int i = 0; i < 10; i++) {
		list.add(i);
	}
	cout << endl;

	cout << "Thread 2 adding to Vector: " << endl;
	thread t2(threadToVector);
	t2.join();

	thread producerThread(producer);
	thread consumerThread(consumer);

	producerThread.join();
	consumerThread.join();
	cout << "Net: " << c << endl;

	system("pause");
}




