#include "BankAccount.h"
#include <iostream>

using namespace std;

int main() {
	BankAccount account;
	Transaction* t = new Transaction(1337);
	account + *t;
	t = new Transaction(-337);
	account + *t;
	delete(t);
	cout << account << endl;
    return 0;
}



