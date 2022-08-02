//#include<SFML/Graphics.hpp>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
//using namespace sf;



//GLOBAL VARIABLE

int SIZE, startpoint;
string file, WordToGuess;

//function "*one*"  to play the game 

void playgame(string word)
{

	int wrong = 0;
	int guess = 0;
	string display = word;
	for (int i = 0; i < display.length(); i++)
		display[i] = '*';
	cout << "\nEnter The Letters Of The Wordes \n";
	while (guess < word.length())
	{
		cout << display << ":" << endl;
		char response;
		cin >> response;
		bool guess_good = false;
		for (int i = 0; i < word.length(); i++)
			if (response == word[i])
			{
				display[i] = word[i];
				guess++;
				guess_good = true;
			}
		if (!guess_good)
		{
			wrong++;
			cout << response << " " << " this is not the word \n";
		}
	}

	if (guess == word.length())
	{
		cout << "\tCongratulations \n";
	}
}

// function "two" to get the word
void getwords(string file, string* ptrword)
{


	ifstream infile;
	infile.open(file);

	if (infile.is_open())
	{

		for (int i = 0; i < SIZE; i++)
		{
			infile >> ptrword[i];

		}

	}

	infile.close();
}

//function "*three*" to mixture 1 and 2 functions

void LogicTheGame(string file, string* ptrword, int Size, int startpoint)
{

	for (int i = startpoint; i < Size; i++)
	{
		getwords(file, ptrword);

		WordToGuess = ptrword[i];
		playgame(WordToGuess);


		cout << ptrword[i] << endl;


		if (i == 29 || i == 59 || i == 99)
			break;
	}

}

int main()
{
	int countplay = 0;
	string  answer = "yes";

	while (answer == "yes")
	{
		countplay++;

		if (countplay == 4)
			countplay = 1;

		string* ptrword = new string[150];
		
		string categories, level;
		cout << "Enter The Categories (animal - food - programming - scientist)"<< endl;
		cin >> categories;
		cout << "\nEnter The Level (easy - medium - hard)" << endl;
		cin >> level;

		if (categories == "animal")
		{
			SIZE = 100;
			file = "ANIMAL.txt";

			if (level == "easy")
			{

				if (countplay == 1)
					startpoint = 0;

				else if (countplay == 2)
					startpoint = 30;

				else if (countplay == 3)
					startpoint = 60;

				LogicTheGame(file, ptrword, SIZE, startpoint);
			}


			else if (level == "medium")
			{
				if (countplay == 1)
					startpoint = 10;

				else if (countplay == 2)
					startpoint = 40;

				else if (countplay == 3)
					startpoint = 70;


				LogicTheGame(file, ptrword, SIZE, startpoint);

			}

			else if (level == "hard")
			{


				if (countplay == 1)
					startpoint = 20;

				else if (countplay == 2)
					startpoint = 50;

				else if (countplay == 3)
					startpoint = 80;


				LogicTheGame(file, ptrword, SIZE, startpoint);

			}

			else if (level == "mixture")
			{
				startpoint = 90;
				LogicTheGame(file, ptrword, SIZE, startpoint);

			}


		}


		else if (categories == "food")
		{
			SIZE = 101;
			file = "FOOD.txt";

			if (level == "easy")
			{
				if (countplay == 1)

					startpoint = 0;

				else if (countplay == 2)
					startpoint = 30;

				else if (countplay == 3)
					startpoint = 60;


				LogicTheGame(file, ptrword, SIZE, startpoint);

			}
			else if (level == "medium")
			{

				if (countplay == 1)
					startpoint = 10;

				else if (countplay == 2)
					startpoint = 40;

				else if (countplay == 3)
					startpoint = 70;


				LogicTheGame(file, ptrword, SIZE, startpoint);
			}

			else if (level == "hard")
			{

				if (countplay == 1)
					startpoint = 20;

				else if (countplay == 2)
					startpoint = 50;

				else if (countplay == 3)
					startpoint = 80;


				LogicTheGame(file, ptrword, SIZE, startpoint);

			}

			else if (level == "mixture")
			{
				startpoint = 90;
				LogicTheGame(file, ptrword, SIZE, startpoint);

			}

		}


		else if (categories == "programming")
		{

			file = "PROGRAMMING.txt";
			SIZE = 108;

			if (level == "easy")
			{

				if (countplay == 1)
					startpoint = 0;

				else if (countplay == 2)
					startpoint = 30;

				else if (countplay == 3)
					startpoint = 60;


				LogicTheGame(file, ptrword, SIZE, startpoint);

			}
			else if (level == "medium")
			{

				if (countplay == 1)
					startpoint = 10;

				else if (countplay == 2)
					startpoint = 40;

				else if (countplay == 3)
					startpoint = 70;


				LogicTheGame(file, ptrword, SIZE, startpoint);

			}
			else if (level == "hard")
			{
				if (countplay == 1)
					startpoint = 20;

				else if (countplay == 2)
					startpoint = 50;

				else if (countplay == 3)
					startpoint = 80;


				LogicTheGame(file, ptrword, SIZE, startpoint);

			}

			else if (level == "mixture")
			{
				startpoint = 90;
				LogicTheGame(file, ptrword, SIZE, startpoint);

			}

		}


		else if (categories == "scientist")
		{
			SIZE = 100;
			file = "SCIENTIST.txt";
			if (level == "easy")
			{

				if (countplay == 1)
					startpoint = 0;

				else if (countplay == 2)
					startpoint = 30;

				else if (countplay == 3)
					startpoint = 60;


				LogicTheGame(file, ptrword, SIZE, startpoint);
			}

			else if (level == "medium")
			{
				if (countplay == 1)
					startpoint = 10;

				else if (countplay == 2)
					startpoint = 40;

				else if (countplay == 3)
					startpoint = 70;


				LogicTheGame(file, ptrword, SIZE, startpoint);

			}
			else if (level == "hard")
			{

				if (countplay == 1)
					startpoint = 20;

				else if (countplay == 2)
					startpoint = 50;

				else if (countplay == 3)
					startpoint = 80;


				LogicTheGame(file, ptrword, SIZE, startpoint);
			}

			else if (level == "mixture")
			{
				startpoint = 90;
				LogicTheGame(file, ptrword, SIZE, startpoint);

			}

		}

		delete[] ptrword;
		ptrword = NULL;
		cout << "DO YOU WANT PLAY AGIN WRITE yes OR no  " << endl;
		cin >> answer;

	}
	//END THE WHILE LOOP 

	return 0;
}