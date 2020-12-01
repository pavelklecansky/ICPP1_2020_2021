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


	//Matrix<double> mmt_d = m.TypeCast<double>();
	//mmt_d.SetValue(1, 2, 54.4);
	//mmt_d.Print();


	//Matrix<int> aMatrix{ 3,2 };
	//int aMatrixPole[] = { 1,4,2,5,3,6 };
	//aMatrix.SetZ(aMatrixPole);
	//aMatrix.Print();

	//Matrix<int> bMatrix{ 2,3 };
	//int bMatrixPole[] = { 7,8,9,10,11,12 };
	//bMatrix.SetZ(bMatrixPole);
	//bMatrix.Print();

	//Matrix<int> product = aMatrix.Multiply(bMatrix);
	//product.Print();
	Matrix<int> m{ 3,3 };
	int jednodpole[] = { 0,1,2,3,4,5,6,7,8 };
	m.SetZ(jednodpole);
	m.Print();
	Matrix<int> mt = m.Transposition();
	mt.Print();
	Matrix<int> mmt = m.Multiply(mt);
	mmt.Print();
	Matrix<double> mmt_d = mmt.TypeCast<double>();
	mmt_d.Print();
	Matrix<double> n_d{ 3,3 };
	double jednodpole_d[] = { 4.5,5,0,2,-0.5,7,1.5,9,6 };
	n_d.SetZ(jednodpole_d);
	n_d.Print();
	Matrix<double> mmtn_d = mmt_d.Multiply(n_d);
	mmtn_d.Print();
	Matrix<int> r = mmtn_d.TypeCast<int>();
	r.Print();
	Matrix<int> t{ 3,3 };
	int tpole[] = { 85,225,236,292,819,866,499,1413,1496 };
	t.SetZ(tpole);
	t.Print();
	std::cout << "r==t ? " << (r.IsSame(t) ? "true" : "false") << std::endl;
	return 0;
}
