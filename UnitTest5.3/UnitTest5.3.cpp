#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab5.3\Lab5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t = k(0);
			Assert::AreEqual(1., t);
		}
	};
}
