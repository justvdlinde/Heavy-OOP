#ifndef TRANSACTION_H_
#define TRANSACTION_H_
#include <string>

namespace std {

class Transaction {
public:
	Transaction(float amount);
	~Transaction();
	const float getAmount() const;
	const string getDate() const;

private:
	float amount;
	string date;
};

} /* namespace std */

#endif /* TRANSACTION_H_ */
