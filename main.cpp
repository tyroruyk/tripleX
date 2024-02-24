#include "headers/namespaces.h"
#include <ctime>

bool PlayerGuess(int levelDifficulty);

int main()
{
	system("COLOR 02");
	srand(time(NULL));

	cout << "### Welcome to Avishek's TripleX! ###" << endl << endl;

	int levelDifficulty = 1;
	const int maxDifficulty = 10;

	while (levelDifficulty <= maxDifficulty)
	{
		bool levelCompleted = PlayerGuess(levelDifficulty);
		cout << endl;
		cin.clear();
		cin.ignore();

		if (levelCompleted) {
			++levelDifficulty;
		}
		cout << endl;
	}
	
	cout << "*** Great work agent! You've successfully extracted all files... Now get out of there! ***" << endl;
	getchar();

	return 0;
}