/*
 * Transaction.cpp
 *
 *  Created on: Oct 18, 2017
 *      Author: JustLaptop
 */

#include "Transaction.h"

namespace std {

Transaction::Transaction(float amount) {
	this->amount = amount;
	date = __DATE__;
}

Transaction::~Transaction() { }

const float Transaction::getAmount() const {
	return amount;
}

const string Transaction::getDate() const {
	return date;
}



} /* namespace std */
