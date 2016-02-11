// Iron_Bull.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

std::string getWord()
{
	std::cout << "Cheif: ";
	std::string line;
	std::getline(std::cin, line);

	if (line.length() < 2 && isalpha(line[0]))
	{
		for (int i = 0; i < line.length(); i++)
		{
			line[i] = toupper(line[i]);
		}
		return line;
	}
	else
	{
		std::cout << "incorrect" << std::endl;
	}
}

int main()
{

	/*Find another Tribe*/
	std::cout << "After a long walk down the stream you come across another tribe. You talk to the chief of the tribe and ask if they have seen any buffalo. They are willing to tell you where they last saw buffalo, but only if you can solve this riddle or kill their strongest warrior. Which do you choose?" << std::endl;
	std::cout << "1 - Riddle" << std::endl;
	std::cout << "1 - Fight Warrior" << std::endl;
	std::string test = getWord();
	int tries = 1;
	if (test == "1")
	{
		std::cout << "What has mountains but no earth, " << std::endl;
		std::cout << "Rivers but no water," << std::endl;
		std::cout << "Fields but no crops." << std::endl;
		std::string userChoice = getWord();

		if (userChoice == "A MAP" || "MAP")
		{
			std::cout << "They are impressed with your wisdom, and tell you that they recently saw buffalo in the west." << std::endl;
		}
		else
		{
			if (tries <= 0)
			{
				std::cout << "You are incorrect again, and they will not tell you where the buffalo is."
					return 0;
			}
			std::cout << "incorrect, you may try once more" << std::endl;
			tries--;
		}
	}
	else if (test == "2")
	{
		std::cout << "You have decided to fight the warrior" << std::endl;
	}


	/*Riddle*/



	/* Fight combat */
	std::cout << "Do you decide to attack first?" << std::endl;
	std::string userInput = getWord();
	if (userInput == "YES")
	{
		std::cout << "You lunge forward and he stabs you in the face." << std::endl;
	}
	else if (userInput == "NO")
	{
		std::cout << "The warrior starts to swing their sword at you, do you decide to parry or block?" << std::endl;
		std::string userInput1 = getWord();

		if (userInput1 == "PARRY")
		{
			std::cout << "You successfully parry the attack and manage to cut his leg leaving him on the ground struggling to get up. Do you kill him or let him live?" << std::endl;
			std::string userInput2 = getWord();
			if (userInput2 == "KILL")
			{
				std::cout << "you kill him and the tribe kicks you out." << std::endl;
			}
			else if (userInput2 == "LIVE" || "let him live")
			{
				std::cout << "You let him live and they tell you to head west." << std::endl;
			}
		}
		else if (userInput1 == "BLOCK")
		{
			std::cout << "you block" << std::endl;
		}
	}


	/*
	switch (userInput)
	{
	case i:
	{
		std::cout << "Something 1" << std::endl;
	}
	}
	*/

    return 0;
}

std::string test()
{

}

