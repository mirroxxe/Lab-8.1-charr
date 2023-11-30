#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab №8.1 charr/Lab №8.1 charr.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestContainsAllLetters_Negative)
		{
			const char* testInput = "random text"; 

			// Перевіряємо, чи функція containsAllLetters повертає false для рядка, який не містить усі літери з "while"
			Assert::IsFalse(containsAllLetters(testInput));
		}
	};
}