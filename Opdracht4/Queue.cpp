#ifndef QUEUE_H_
#define QUEUE_H_
#define SIZE 10
#include <iostream>
#include <cstdlib>

using namespace std;

template <class T>
class Queue {

	T 		*array;
	int 	cap;
	int 	front;
	int 	rear;
	int 	count;

public:
	Queue(int size = SIZE); // constructor

	void 	dequeue();
	void 	enqueue(T t);
	T 		peek();
	int 	size();
	bool 	isEmpty();
	bool 	isFull();
};

template <class T>
Queue<T>::Queue(int size) {
	array 		= new T[size];
	cap 		= size;
	front 		= 0;
	rear 		= -1;
	count 		= 0;
}

template <class T>
void Queue<T>::dequeue() {
	cout << "Removing " << array[front] << endl;
	front = (front + 1) % cap;
	count--;
}

template <class T>
void Queue<T>::enqueue(T item) {
	cout << "Inserting " << item << endl;
	rear = (rear + 1) % cap;
	array[rear] = item;
	count++;
}

template <class T>
T Queue<T>::peek() {
	return array[front];
}

template <class T>
int Queue<T>::size() {
	return count;
}

template <class T>
bool Queue<T>::isEmpty() {
	return (size() == 0);
}

template <class T>
bool Queue<T>::isFull() {
	return (size() == cap);
}

int main() {
	Queue<string> q(10);

	q.enqueue("Goku");
	q.enqueue("Gohan");
	q.enqueue("Vegeta");

	cout << "Front element is: " << q.peek() << endl;
	cout << "Size of queue is: " << q.size() << endl;

	q.dequeue();
	q.dequeue();
	q.dequeue();

	if (q.isEmpty())
		cout << "Queue is empty" << endl;
	else
		cout << "Queue has room left" << endl;

	return 0;
}

#endif /* QUEUE_H_ */
