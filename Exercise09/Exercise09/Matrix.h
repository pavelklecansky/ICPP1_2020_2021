#pragma once
#ifndef MATRIX_H
#include <iostream>

template <typename T>
class Matrix
{
private:
	int rows;
	int columns;
	T** matrix;
	bool ValidPosition(int row, int column) const;
public:
	Matrix(int rows, int columns);
	Matrix(const Matrix<T>& m);
	~Matrix();
	void SetValue(int rows, int column, T value);
	void SetZ(T* array);
	T& Get(int row, int column);
	const T& Get(int row, int column) const;
	void Print() const;

	Matrix<T> Transposition() const;
	Matrix<T> Multiply(const Matrix& m) const;
	Matrix<T> Multiply(T scalar) const;
	Matrix<T> Addition(const Matrix& m) const;
	Matrix<T> Addition(T scalar) const;

	template <typename R>
	Matrix<R> TypeCast() const;
};

#endif // !MATRIX_H

template<typename T>
inline bool Matrix<T>::ValidPosition(int row, int column) const
{
	bool inRowRange = (row < rows) && (row >= 0);
	bool inColumnRange = (column < columns) && (column >= 0);
	return inRowRange && inColumnRange;
}

template<typename T>
inline Matrix<T>::Matrix(int rows, int columns) : rows(rows), columns(columns)
{
	matrix = new T * [rows];
	for (int i = 0; i < rows; ++i) {
		matrix[i] = new T[columns];
		for (int j = 0; j < columns; j++)
		{
			matrix[i][j] = 0;
		}
	}
}

template<typename T>
inline Matrix<T>::Matrix(const Matrix<T>& m) : Matrix(m.rows, m.columns)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			matrix[i][j] = m.Get(i, j);
		}
	}
}

template<typename T>
inline Matrix<T>::~Matrix()
{
	for (int i = 0; i < rows; ++i)
		delete[] matrix[i];
	delete[] matrix;
}

template<typename T>
inline void Matrix<T>::SetValue(int row, int column, T value)
{
	if (!ValidPosition(row, column))
	{
		throw std::out_of_range("Out off matrix range");
	}
	matrix[row][column] = value;
}

template<typename T>
inline void Matrix<T>::SetZ(T* array)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			matrix[i][j] = array[columns * i + j];
		}
	}
}

template<typename T>
inline T& Matrix<T>::Get(int row, int column)
{
	if (!ValidPosition(row, column))
	{
		throw std::out_of_range("Out off matrix range");
	}
	return matrix[row][column];
}

template<typename T>
inline const T& Matrix<T>::Get(int row, int column) const
{
	if (!ValidPosition(row, column))
	{
		throw std::out_of_range("Out off matrix range");
	}
	return matrix[row][column];
}

template<typename T>
inline void Matrix<T>::Print() const
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			std::cout << Get(i, j) << " ";
		}
		std::cout << std::endl;
	}
}

template<typename T>
inline Matrix<T> Matrix<T>::Transposition() const
{
	Matrix<T> transpositMatrix{ rows,columns };
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			transpositMatrix.SetValue(j, i, Get(i, j));
		}
	}
	return transpositMatrix;
}

template<typename T>
inline Matrix<T> Matrix<T>::Multiply(const Matrix& m) const
{
	int maxRows = std::max(m.rows, rows);
	int maxColumns = std::max(m.columns, columns);
	Matrix<T> multiplyMatrix{ maxRows,maxColumns };
	for (int i = 0; i < maxRows; i++)
	{
		for (int j = 0; j < maxColumns; j++)
		{
			for (int inner = 0; inner < 2; inner++) {
				multiplyMatrix.matrix[i][j] += matrix[i][inner] * m.matrix[inner][j];
			}
		}
	}
	return multiplyMatrix;
}

template<typename T>
inline Matrix<T> Matrix<T>::Multiply(T scalar) const
{
	Matrix<T> multiplyMatrix{ rows,columns };
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			multiplyMatrix.SetValue(i, j, Get(i, j) * scalar);
		}
	}
	return multiplyMatrix;
}

template<typename T>
inline Matrix<T> Matrix<T>::Addition(const Matrix& m) const
{
	if (rows != m.rows || columns != m.columns)
	{
		throw std::invalid_argument("Bad matrix size");
	}
	Matrix<T> additionMatrix{ rows,columns };
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			additionMatrix.SetValue(i, j, Get(i, j) + m.Get(i, j));
		}
	}
	return additionMatrix;
}

template<typename T>
inline Matrix<T> Matrix<T>::Addition(T scalar) const
{
	Matrix<T> additionMatrix{ rows,columns };
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			additionMatrix.SetValue(i, j, Get(i, j) + scalar);
		}
	}
	return additionMatrix;
}

template<typename T>
template<typename R>
inline Matrix<R> Matrix<T>::TypeCast() const
{
	Matrix<R> castedMatrix{ rows,columns };
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			castedMatrix.SetValue(i, j, static_cast<R>(Get(i, j)));
		}
	}
	return castedMatrix;
}
