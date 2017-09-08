#include "MemoryAddressing.h"

extern "C" int NumFibVals_;
extern "C" int MemoryAddressing_(int i, int* v1, int* v2, int* v3, int* v4);

void MemoryAddressing()
{
	for (int i = -1; i < NumFibVals_ + 1; i++)
	{
		int v1 = -1, v2 = -1, v3 = -1, v4 = -1;
		int rc = MemoryAddressing_(i, &v1, &v2, &v3, &v4);

		std::printf("i: %2d rc: %2d - ", i, rc);
		std::printf("v1: %5d v2: %5d v3: %5d v4: %5d\n", v1, v2, v3, v4);
	}
}