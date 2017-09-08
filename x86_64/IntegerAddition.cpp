#include "IntegerAddition.h"

extern "C" char GlChar = 10;
extern "C" short GlShort = 20;
extern "C" int GlInt = 30;
extern "C" long long GlLongLong = 0x000000000FFFFFFFE;

extern "C" void IntegerAddition_(char a, short b, int c, long long d);

void IntegerAddition()
{
	std::printf("Before GlChar:	%d\n\
	GlShort:%d\n\
	GlInt:	%d\n\
	GlLongLong:	%lld\n", GlChar, GlShort, GlInt, GlLongLong);

	IntegerAddition_(3, 5, -37, 11);

	std::printf("After GlChar:	%d\n\
	GlShort:%d\n\
	GlInt:	%d\n\
	GlLongLong:	%lld\n", GlChar, GlShort, GlInt, GlLongLong);
}