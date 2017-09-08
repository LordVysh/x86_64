#include "IntMulDiv.h"
extern "C" int IntMulDiv_(int a, int b, int* prod, int* quo, int* rem);

void IntMulDiv()
{
	int a = 21, b = 9;
	int prod = 0, quo = 0, rem = 0;
	int rc;

	rc = IntMulDiv_(a, b, &prod, &quo, &rem);
	std::printf("Input 1 - a: %4d b: %4d\n", a, b);
	std::printf("Output 1 - rc: %4d prod: %4d\n", rc, prod);
	std::printf("			quo: %4d rem: %4d\n\n", quo, rem);

	a = -29;
	prod = quo = rem = 0;
	rc = IntMulDiv_(a, b, &prod, &quo, &rem);
	std::printf("Input 2 - a: %4d b: %4d\n", a, b);
	std::printf("Output 2 - rc: %4d prod: %4d\n", rc, prod);
	std::printf("			quo: %4d rem: %4d\n\n", quo, rem);

	b = 0;
	prod = quo = rem = 0;
	rc = IntMulDiv_(a, b, &prod, &quo, &rem);
	std::printf("Input 1 - a: %4d b: %4d\n", a, b);
	std::printf("Output 1 - rc: %4d prod: %4d\n", rc, prod);
	std::printf("	quo: %4d rem: %4d\n\n", quo, rem);

}