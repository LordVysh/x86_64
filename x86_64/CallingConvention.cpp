#include "CallingConvention.h"
extern "C" void CalculateSums_(int a, int b, int c, int* s1, int* s2, int*s3);

void CalculateSums()
{
	int a = 3, b = 5, c = 8;
	int s1a, s2a, s3a;

	CalculateSums_(a, b, c, &s1a, &s2a, &s3a);

	int s1b = a + b + c;
	int s2b = a * a + b * b + c * c;
	int s3b = a * a * a + b * b * b + c * c * c;

	std::printf("Input	a:	%4d b:	%4d c:	%4d\n", a, b, c);
	std::printf("Output: s1a: %4d s2a: %4d s3a: %4d\n", s1a, s2a, s3a);
	std::printf("	s1b: %4d s2b: %4d s3b: %4d", s1b, s2b, s3b);
}