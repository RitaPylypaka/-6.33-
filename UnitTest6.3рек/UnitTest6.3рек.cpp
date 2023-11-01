#include "pch.h"
#include "CppUnitTest.h"
#include "../пр6.3рек/пр6.3рек.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63рек
{
	TEST_CLASS(UnitTest63рек)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int m=8;
			int n[m] = { 1,2,3,4,5,6,7,8 };
			int a = Max(n, m,1,n[0]);
			Assert::AreEqual(8, a);
		

		}
	};
}
