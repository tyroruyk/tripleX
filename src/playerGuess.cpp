#include "headers/namespaces.h"

void PrintIntro(int levelDifficulty);

bool PlayerGuess(int levelDifficulty)
{
	// Intro
	PrintIntro(levelDifficulty);

	// digits in the code
	const int digitA = rand() % levelDifficulty + levelDifficulty;
	const int digitB = rand() % levelDifficulty + levelDifficulty;
	const int digitC = rand() % levelDifficulty + levelDifficulty;

	// Summation and Product of the digits
	const int digitSum = digitA + digitB + digitC;
	const int digitProduct = digitA * digitB * digitC;

	// Conditions to enter the code
	cout << endl << endl;
	cout << "+ There are three digits in the code" << endl;
	cout << "+ The digits add-up to: " << digitSum << endl;
	cout << "+ The digits multiply to give: " << digitProduct << endl;
	cout << "+ Enter the code in the following format: " << endl;
	cout << "~~~ DigitA DigitB DigitC" << endl;

	// Taking user input for PIN
	int guessA, guessB, guessC;
	do {
	    cout << endl << "Enter the PIN: ";
	    cin >> guessA >> guessB >> guessC;
	} while (guessA < 0 || guessA > 9 || guessB < 0 || guessB > 9 || guessC < 0 || guessC > 9);
	
	int guessSum = guessA + guessB + guessC;
	int guessProduct = guessA * guessB * guessC;

	cout << endl;

	// Checking if the code is correct or not
	if (guessSum == digitSum && guessProduct == digitProduct) {
		cout << "*** Well done, agent! You've extracted a file successfully! Keep Going... ***";
		return true;
	}
	else {
		cout << "*** You've entered the wrong code... Careful agent! Try again... ***";
		return false;
	}
}
