// Exercise09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Matrix.h"

int main()
{
	//Matrix<int> m{ 3,3 };
	//int jednodpole[] = { 0,1,2,3,4,5,6,7,8 };
	//m.SetZ(jednodpole);

	//m.Print();


	//Matrix<int> mDiffrent{ 3,2 };
	//int jednodpoleDiffrent[] = { 0,1,2,3,4,5 };
	//mDiffrent.SetZ(jednodpoleDiffrent);

	//Matrix<int> mCopy{ m };
	//mCopy.Print();
	//Matrix<int> multipyScalar = mCopy.Multiply(5);
	//multipyScalar.Print();
	//Matrix<int> additionScalar = mCopy.Addition(5);
	//additionScalar.Print();

	//Matrix<int> addition = additionScalar.Addition(mDiffrent);
	//addition.Print();

	/*Matrix<int> transpositioned = mCopy.Transposition();
	transpositioned.Print();*/


	/*Matrix<double> mmt_d = m.TypeCast<double>();
	mmt_d.SetValue(1, 2, 54.4);
	mmt_d.Print();*/


	Matrix<int> aMatrix{ 3,2 };
	int aMatrixPole[] = { 1,4,2,5,3,6 };
	aMatrix.SetZ(aMatrixPole);
	aMatrix.Print();

	Matrix<int> bMatrix{ 2,3 };
	int bMatrixPole[] = { 7,8,9,10,11,12 };
	bMatrix.SetZ(bMatrixPole);
	bMatrix.Print();

	Matrix<int> product = aMatrix.Multiply(bMatrix);
	product.Print();
}
