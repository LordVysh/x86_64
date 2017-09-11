#include "CalcArraySum.h"

extern "C" int CalcArraySum_(const int* x, int n);

int CalcArraySumCpp(const int* x, int n)
{
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += *x++;
	}

	return sum;
}

void CalcArraySum()
{
	int x[] = { 1, 7, -3, 5, 2, 9, -6, 12 };
	int n = sizeof(x) / sizeof(int);

	std::printf("Elements of x[]\n");
	for (int i = 0; i < n; i++)
	{
		std::printf("%d ", x[i]);
	}
	std::printf("\n\n");

	int sum1 = CalcArraySumCpp(x, n);
	int sum2 = CalcArraySum_(x, n);

	std::printf("sum1: %d\n", sum1);
	std::printf("sum2: %d\n", sum2);
}