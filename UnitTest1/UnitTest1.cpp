#include "pch.h"
#include "CppUnitTest.h"
#include "../Arithmetic.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Arithmetic;
			int elementoftheprogression;
			double a = 4;
			double d = 2;
			double n = 2;
			elementoftheprogression = (a + n * d);
			Assert::AreEqual(elementoftheprogression, 8);

		}
	};
}
