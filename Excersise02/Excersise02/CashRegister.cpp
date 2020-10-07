#include "CashRegister.h"
#include "Receipt.h"
#include <exception>

#define MAX_RECEIPTS 10

int CashRegister::idCounter = 1000;

CashRegister::CashRegister()
{
	receiptCounter = 0;
	receipts = new Receipt[MAX_RECEIPTS];
}

CashRegister::~CashRegister()
{
	delete[] receipts;
}

Receipt& CashRegister::CreateReceipt(double cost, double dph)
{
	// if statement na pocet jiz vytvrenych uctenek
	//	- pokud max dosazeno tak bych vyhodili vyjimku
	if (receiptCounter == MAX_RECEIPTS)
	{
		throw new std::exception("CashRegister is full.");
	}
	// - Nastaveni uctenky (vytvoreni inctance?) - id, cost ,dph
	Receipt receipt = Receipt(receiptCounter, cost, dph);
	receipts[receiptCounter] = receipt;
	// - Inkrementace poctu uctenek/idCounter
	idCounter++;
	// - vratit danou uètenku
	return receipts[receiptCounter++];
}

Receipt& CashRegister::GetReceipt(int id)
{
	if (id >= 0 && id < MAX_RECEIPTS)
	{
		return receipts[id];
	}
	return receipts[0];
}

double CashRegister::GetCost() const
{
	double allCost = 0;
	for (int i = 0; i < receiptCounter; i++)
	{
		allCost += receipts[i].GetCost();
	}
	return allCost;
}

double CashRegister::GetCostWithDph() const
{
	double allCostWithDph = 0;
	for (int i = 0; i < receiptCounter; i++)
	{
		double costWithDpg = receipts[i].GetCost() * (1 + receipts[i].GetDph());
		allCostWithDph += costWithDpg;
	}
	return allCostWithDph;
}