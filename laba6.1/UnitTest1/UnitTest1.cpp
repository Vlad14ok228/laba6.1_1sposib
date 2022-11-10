#include "pch.h"
#include "CppUnitTest.h"
#include "../laba6.1/laba6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int const size = 25;
			int a[size];
			int Low = 5;
			int High = 90;
			int i = 0;
			Create(a, size, Low, High);
			Print(a, size);
			Sum(a, size, i);
			number(a, size, i, Low, High);
			foo(size, a);
		}
	};
}
