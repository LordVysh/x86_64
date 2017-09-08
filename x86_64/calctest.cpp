#include <iostream>
#include "calctest.h"

extern "C" int CalcSum_(int a, int b, int c);

int CalcSumTest()
{
	int a = 1, b = 2, c = 3;
	int sum = CalcSum_(a, b, c);
	return sum;
}