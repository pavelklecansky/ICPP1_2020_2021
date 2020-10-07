#pragma once
#ifndef CASH_REGISTER_H
#define CASH_REGISTER_H

#include "Receipt.h"

class CashRegister
{
	static int idCounter;
	int receiptCounter;
	Receipt* receipts;
public:
	CashRegister();
	~CashRegister();
	Receipt& CreateReceipt(double cost, double dph);
	Receipt& GetReceipt(int id);
	double GetCost() const;
	double GetCostWithDph() const;
};

#endif // !CASH_REGISTER_H
