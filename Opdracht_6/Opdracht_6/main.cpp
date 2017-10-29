#include <vector>
#include <iostream>
#include <string>
#include <thread>

using namespace std;

vector<int> v;

void shared_print(string msg, int id) {
	//mu.lock()
}

void thread1() {
	for (unsigned int i = 0; i < 100; i++) {
		v.push_back(i);
	}
};

void thread2() {
	for (unsigned int i = 0; i < 100; i++) {
		v.push_back(i);
	}
};

int main() {

	//thread t1(thread1);
	//thread t2(thread2);
	//t1.join();
	//t2.join();
	//for (unsigned int i = 0; i < 100; i++) {
	//	v.push_back(i);
	//}

	//cout << "Vector: " << endl;

	for (unsigned int i = 0; i < v.size(); i++) {
		cout << v[i] << " " << endl;
	}
	return 0;
}
