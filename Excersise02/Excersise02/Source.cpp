#include <iostream>
#include "Receipt.h"
#include "CashRegister.h"

int main(int argc, char** argv)
{
	CashRegister* cashRegister = new CashRegister();

	// Throw an exception
	/*for (int i = 0; i < 11; i++)
	{
		Receipt& recipt = cashRegister->CreateReceipt(150, 1);
		std::cout << recipt.GetCost() << std::endl;
		std::cout << recipt.GetDph() << std::endl;
		std::cout << recipt.GetId() << std::endl;
	}*/
	Receipt& recipt = cashRegister->CreateReceipt(150, 0.21);
	std::cout << recipt.GetCost() << std::endl;
	std::cout << recipt.GetDph() << std::endl;
	std::cout << recipt.GetId() << std::endl;
	recipt.SetCost(180);
	Receipt& sameRecipt = cashRegister->GetReceipt(0);
	sameRecipt.SetDph(0.18);
	
	if (recipt.GetId() == sameRecipt.GetId() && recipt.GetCost() == sameRecipt.GetCost() && recipt.GetDph() == sameRecipt.GetDph())
	{
		std::cout << "Same recipt" << std::endl;
	}

	std::cout << cashRegister->GetCost() << std::endl;
	std::cout << cashRegister->GetCostWithDph() << std::endl;
	return 0;
}