#include "BankAccount.h"
#include "BankAccount.h"

namespace std {

BankAccount::BankAccount() {
	balance = 0;
}

BankAccount::~BankAccount() { }

void BankAccount::printHistory() const {

	for (auto const& value : History) {
		string action;
		if (value.getAmount() > 0)
			action = "Deposited ";
		else
			action = "Withdrawn ";
		cout << action << " " << value.getAmount() << ", on: " << value.getDate() << endl;
	}
}

void BankAccount::printBalance() const {
	cout << " " <<  "Balance: " << balance << endl;
}

const float BankAccount::getBalance() const {
	return balance;
}

const void BankAccount::addToBalance(const float amount) {
	balance += amount;
}

void BankAccount::operator+(const Transaction& t) {
	History.push_back(t);
	addToBalance(t.getAmount());
}

void BankAccount::operator-(const Transaction& t) {
	History.push_back(t);
	addToBalance(t.getAmount());
}

ostream& operator<<(ostream& stream, const BankAccount& account) {
	account.printBalance();
	account.printHistory();
	return stream;
}

} /* namespace std */
