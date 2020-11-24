#pragma once

#ifndef GROWING_CONTEINER_H
#define GROWING_CONTEINER_H

#include <stdexcept>
//
template<typename DataType, int DefaultCapacity = 5, int GrowingCoefficient = 2>
class GrowingConteiner
{
	DataType* _array;
	unsigned arrayCapacity;
	unsigned  arraySize;
	bool IsSpaceInArray() const;
	void ExpendArray();
public:
	GrowingConteiner();
	~GrowingConteiner();
	void Add(const DataType& o);
	unsigned int Size();
	DataType& operator[](int index);
	DataType operator[](int index) const;
};


template<typename DataType, int DefaultCapacity, int GrowingCoefficient>
inline GrowingConteiner<DataType, DefaultCapacity, GrowingCoefficient>::GrowingConteiner()
{
	if (DefaultCapacity < 1)
	{
		throw std::invalid_argument("Negative Capacity");
	}
	arrayCapacity = DefaultCapacity;
	arraySize = 0;
	_array = new DataType[arrayCapacity];
}

template<typename DataType, int DefaultCapacity, int GrowingCoefficient>
inline GrowingConteiner<DataType, DefaultCapacity, GrowingCoefficient>::~GrowingConteiner()
{
	delete[] _array;
}

template<typename DataType, int DefaultCapacity, int GrowingCoefficient>
inline void GrowingConteiner<DataType, DefaultCapacity, GrowingCoefficient>::Add(const DataType& data)
{
	if (!IsSpaceInArray())
	{
		ExpendArray();
	}
	_array[arraySize] = data;
	arraySize++;
}

template<typename DataType, int DefaultCapacity, int GrowingCoefficient>
inline bool GrowingConteiner<DataType, DefaultCapacity, GrowingCoefficient>::IsSpaceInArray() const
{
	return arraySize < arrayCapacity;
}

template<typename DataType, int DefaultCapacity, int GrowingCoefficient>
inline void GrowingConteiner<DataType, DefaultCapacity, GrowingCoefficient>::ExpendArray()
{
	arrayCapacity = arrayCapacity * GrowingCoefficient;
	DataType* newArray = new DataType[arrayCapacity];
	for (int i = 0; i < arraySize; i++)
	{
		newArray[i] = _array[i];
	}
	delete[] _array;
	_array = newArray;
}

template<typename DataType, int DefaultCapacity, int GrowingCoefficient>
inline unsigned int GrowingConteiner<DataType, DefaultCapacity, GrowingCoefficient>::Size()
{
	return arraySize;
}

template<typename DataType, int DefaultCapacity, int GrowingCoefficient>
inline DataType& GrowingConteiner<DataType, DefaultCapacity, GrowingCoefficient>::operator[](int index)
{
	if (index < 0 || index >= arraySize)
	{
		throw std::out_of_range("Invalid index");
	}
	return _array[index];
}

template<typename DataType, int DefaultCapacity, int GrowingCoefficient>
inline DataType GrowingConteiner<DataType, DefaultCapacity, GrowingCoefficient>::operator[](int index) const
{
	if (index < 0 || index >= arraySize)
	{
		throw std::out_of_range("Invalid index");
	}
	return _array[index];
}
#endif