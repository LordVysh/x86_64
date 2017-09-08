#include <iostream>
#include "encapsulate.h"

int main(int argc, char* argv[])
{
	int sum = CalcSumTest();
	std::cout << "[[CalcSumTest Sum: " << sum << "]]" <<'\n';
	
	std::cout << "\n[[IntMulDiv Output:" << "]]" << '\n';
	IntMulDiv();

	std::cout << "[[CallingConvention Output:" << "]]" << '\n';
	CalculateSums();

	std::cout << "\n\n[[MemoryAddressing Output:" << "]]" << '\n';
	MemoryAddressing();

	std::cout << "\n\n[[IntergerAddition Output: " << "]]" << '\n';
	IntegerAddition();

	std::cin.get();

	return 0;
}