#include "pch.h"
#include "CppUnitTest.h"
extern "C" {
#include "../assignment 3/main.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestPrime
{
	TEST_CLASS(UnitTestPrime)
	{
	public:
		
		TEST_METHOD(TEStprime)
		{
			Assert::AreEqual("Prime", isPrime(2));
			Assert::AreEqual("Prime", isPrime(5));
			Assert::AreEqual("Prime", isPrime(9));
		}

		TEST_METHOD(TEStnonprime)
		{
			Assert::AreEqual("Not Prime", isPrime(4)); 
			Assert::AreEqual("Not Prime", isPrime(8));
			Assert::AreEqual("Not Prime", isPrime(12));
		}

		TEST_METHOD(TEStprimeEdgeCase) 
		{
			Assert::AreEqual("Not Prime", isPrime(-5));
			Assert::AreEqual("Not Prime", isPrime(0));
			Assert::AreEqual("Not Prime", isPrime(1));
		}
	};
}
