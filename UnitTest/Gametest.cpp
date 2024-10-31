#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* determineWinner(const char player1[], const char player2[]);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace GameTest
{
	TEST_CLASS(GameTest)
	{
	public:

		TEST_METHOD(caseSensitivityTest)
		{
			// Test case with lowercase inputs
			Assert::AreEqual("Invalid", determineWinner("rock", "Scissors"));

		}
		TEST_METHOD(firstPlayerWinTest)
		{
			// Test case with player1 as a winner
			Assert::AreEqual("Player1", determineWinner("Scissors", "Rock"));

		}
		TEST_METHOD(secondPlayerWinTest)
		{
			// Test case with player2 As a winner
			Assert::AreEqual("Player2", determineWinner("Paper", "Scissors"));

		}
		TEST_METHOD(inputInvalidFunctionality)
		{
			// Test case with Invalid Input
			Assert::AreEqual("Invalid", determineWinner("rock", "Scissors"));

		}




	};
}
