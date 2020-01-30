#inlclude <iostream>

void PrintIntroduction(int Difficulty)
{
	std::cout << "\n\nYou are a secret agent breaking into a \n " << Difficulty;
	std::cout << "secure server room....\nYou need to enter the correct codes to continiue...\n\n";
}

bool PlayGame(int Difficulty)
{
	PrintIntroduction(Difficulty);

	const int CodeA = 4;
	const int CodeB = 3;
	const int CodeC = 2;

	int CodeSum = CodeA + CodeB + CodeC;
	int CodeProduct = CodeA * CodeB * CodeC;


	std::count << std::endl;
	std::cout << "+ There are 3 numbers in the code" << std::endl;
	std::count << "\n+ The codes add-upp to: " << CodeSum << std::endl;
	std::count << "\n+ The codes multiply to give: " CodeProduct << std::endl;

	int GuessA, GuessB, GuessC;
	std::cin >> GuessA >> GuessB >> GuessC

	srd::cout << "You entered: " << GuessA << GuessB << GuessC;

	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA * GuessB * GuessC;

	if (GuessSum == CodeSum && GuessProduct == Code Product)
	{
		std::count << "\nYou win!";
		return true;
	}

	else
	{
		std::count << "\nYou lose!";
		return false;
	}

	

	int main()
	{
		int LevelDifficulty = 1;
		int const MaxDIfficulty = 5;
		while (true)
	{
		bool blevelComplete = PlayGame(LevelDifficulty);
		std::cin.clear();
		std::cin.ignore();

		if (bLevelComplete) 
		{
			++LevelDifficulty;
	     }
		return 0;
    }