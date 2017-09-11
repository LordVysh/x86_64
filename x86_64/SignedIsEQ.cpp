#include "SignedIsEQ.h"

extern "C" bool SignedIsEQ_(int a, int b);

void SignedIsEQ()
{
	int a = 2;
	int b = 3;
	bool isEqual = false;
	isEqual = SignedIsEQ_(a, b);
	std::printf("IsEqual(%4d, %4d) is %s\n", a, b, isEqual ? "true" : "false");

	a = 18;
	b = 18;
	isEqual = SignedIsEQ_(a, b);
	std::printf("IsEqual(%4d, %4d) is %s", a, b, isEqual ? "true" : "false");
}