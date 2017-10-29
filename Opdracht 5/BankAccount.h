#ifndef BANKACCOUNT_H_
#define BANKACCOUNT_H_
#include <vector>
#include "Transaction.h"
#include <iostream>

namespace std {

class BankAccount {
public:
	BankAccount();
	~BankAccount();
	void printHistory() const;
	void printBalance() const;
	const float getBalance() const;
	const void addToBalance(const float amount);

	void operator +(const Transaction& t);
	void operator -(const Transaction& t);

	friend ostream& operator<<(ostream& stream, const BankAccount& account);

private:
	float balance;
	vector<Transaction> History;
};

} /* namespace std */

#endif /* BANKACCOUNT_H_ */
