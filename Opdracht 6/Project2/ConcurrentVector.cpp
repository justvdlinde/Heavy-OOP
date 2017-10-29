#include "ConcurrentVector.h"

ConcurrentVector::ConcurrentVector()
{
}


ConcurrentVector::~ConcurrentVector()
{
}

void ConcurrentVector::add(int element)
{
	mutex.lock();
	list.push_back(element);
	cout << element << endl;
	mutex.unlock();
}


