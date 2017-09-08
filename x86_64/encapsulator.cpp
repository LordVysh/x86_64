#include <iostream>
#include "encapsulate.h"

int main(int argc, char* argv[])
{
	int sum = CalcSumTest();
	std::cout << "CalcSumTest Sum: " << sum << '\n';
	std::cin.get();

	return 0;
}