#pragma once
#include <vector>
#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

class ConcurrentVector
{
public:
	ConcurrentVector();
	~ConcurrentVector();
	void add(int element);

private:
	vector<int> list;
	mutex mutex;
};

