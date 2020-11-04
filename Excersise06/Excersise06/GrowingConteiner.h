#pragma once

template<typename DataTyp>
struct GrowingConteiner
{
public:
	GrowingConteiner();
	~GrowingConteiner();

private:
	DataTyp* array;
	usigned arraySize;
	usigned numberOfNodes;
};
