#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05.1/lab05.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest051
{
	TEST_CLASS(UnitTest051)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 1.0;
			double y = 1.0;
			double expected_result = 1.08545;

			double actual_result = k(x, y);
			Assert::AreEqual(expected_result, actual_result, 0.0001);
		}
	};
}
