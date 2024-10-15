#include "pch.h"
#include "CppUnitTest.h"
#include "../LR6.2it/LR6.2it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int k = 10;
			int* b = new int[k];
			const int i = 10;
			int expected[i] = { 9,8,7,6,5,4,3,2,1,0 };
			imputE(k, b);
			Inverse(b, k);
			
			
			Assert::AreEqual(b[0], expected[0], 0.00001);
			
		}
	};
}
