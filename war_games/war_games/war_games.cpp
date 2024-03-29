// Skynet HK Aerial.cpp 
//Jon Ullom
//18-OCT-18
//Assignment: 03
//

#include "pch.h"
#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	
	
		//this seeds the random location for the "bad guys" on the 8x8 grid//
		srand(static_cast<unsigned int>(time(0)));
		//this sets the location//
		int badGuyLocation = rand() % 64 + 1;
		//This keeps track of the human searches//
		int humanSearches = 0;
		//This keeps track of the binary searches//
		int binaryAiSearches = 0;
		//This keeps track of the linear AI searches//
		int linearAiSearches = 0;
		//this keeps track of the random AI searches//
		int randomAiSearches = 0;
		//This is the storage space for the human guess//
		int humanGridSearch = 0;
		//This sets the upper limit of the search//
		int searchGridHighNumber = 64;
		//This sets the bottom limit of the search//
		int searchGridLowNumber = 1;
		//This is the storage space for the binary AI guess//
		int binaryAiSearchGrid = 0;
		//This is the storage for which grid the linear AI is searching//
		int linearAiSearchGrid = 1;
		//This is the storage space for the random AI guess//
		int randomAiSearchGrid = 0;
		//This is the boolean variable to tell the program to stop running//
		bool targetAcquiredBinary = false;
		bool targetAcquiredHuman = false;
		bool targetAcquiredLinear = false;
		bool targetAcquiredRandom = false;
		bool playAgain = true;
		char yesORNo ='y';
		
			//This is the initial welcom screen to begin the search//
		cout << "Welcome to SkyNet HK Aerial Drone Search Suite.\n";
		cout << "\n_______________________________________________________";
		do
		{
			//this seeds the random location for the "bad guys" on the 8x8 grid//
			srand(static_cast<unsigned int>(time(0)));
			//this sets the location//
			badGuyLocation = rand() % 64 + 1;
			//This keeps track of the human searches//
			humanSearches = 0;
			//This keeps track of the binary searches//
			binaryAiSearches = 0;
			//This keeps track of the linear AI searches//
			linearAiSearches = 0;
			//this keeps track of the random AI searches//
			randomAiSearches = 0;
			//This is the storage space for the human guess//
			humanGridSearch = 0;
			//This sets the upper limit of the search//
			searchGridHighNumber = 64;
			//This sets the bottom limit of the search//
			searchGridLowNumber = 1;
			//This is the storage space for the binary AI guess//
			binaryAiSearchGrid = 0;
			//This is the storage for which grid the linear AI is searching//
			linearAiSearchGrid = 1;
			//This is the storage space for the random AI guess//
			randomAiSearchGrid = 0;
			//This is the boolean variable to tell the program to stop running//
			targetAcquiredBinary = false;
			targetAcquiredHuman = false;
			targetAcquiredLinear = false;
			targetAcquiredRandom = false;
		
		do
		{

			//This begins the work of the human grid search//
			int humanGridSearch = 0;
			cout << "\nPlease enter a grid between 1-64:";
			//This is the human input for the human grid search//
			cin >> humanGridSearch;
			//This increases the number of searches by the human//
			++humanSearches;
			//This is the first if for the work of the human grid search//
			if (humanGridSearch > badGuyLocation)
			{
				cout << "\nSearch " << humanSearches << " No joy. Target not that high.";
			}
			//This is the second option for the human grid search//
			else if (humanGridSearch < badGuyLocation)
			{
				cout << "\nSearch " << humanSearches << " No joy. Target not that low.";
			}
			//This is the final out for target acquistion by the human grid search//
			else
			{
				cout << "\nSearch " << humanSearches << " Target Aquired found in " << humanSearches << " .";
				//This changes the bool value of the human grid search//
				targetAcquiredHuman = true;
				system("pause");
			}
			//This ends the human search//
		} while (!targetAcquiredHuman);


		//This begins the work of the binary AI program//
		do
		{
			cout << "\nBegin Binary AI Search.\n ";
			//This adds to the number of searches for each iteration//
			++binaryAiSearches;
			//This is the algorithm for the binary search in the do while loop//
			int binaryAiSearchGrid = ((searchGridHighNumber - searchGridLowNumber) / 2) + searchGridLowNumber;
			//This checks if the search grid is correct or not and what to do//
			if (badGuyLocation > binaryAiSearchGrid)
			{
				cout << "\nSearch " << binaryAiSearches << ": Grid " << binaryAiSearchGrid << ": No Joy. Moving to next search.\n";
				cout << "_____________________________________________________________________________________________";
				//This changes the variable searchGridLowNumber if the search is too low//
				searchGridLowNumber = binaryAiSearchGrid + 1;
			}
			//This checks if the search grid is correct or not and what to do//
			else if (badGuyLocation < binaryAiSearchGrid)
			{
				cout << "\nSearch " << binaryAiSearches << ": Grid " << binaryAiSearchGrid << ": No Joy. Moving to next search.\n";
				cout << "_______________________________________________________________________________________________";
				//This changes the searchGridHighNumner if the search is too high//
				searchGridHighNumber = binaryAiSearchGrid - 1;
			}
			else
			{
				//This is report for the when its not high or low and what to print//
				cout << "\nTarget aquired. Location: Grid- " << binaryAiSearchGrid << " Target found in " << binaryAiSearches << " searches.\n";
				cout << "_________________________________________________________________________________________________";
				//This changes the bool value of targetAcquiredBinary to true//
				targetAcquiredBinary = true;
				system("pause");
			}
			//This ends the binary AI grid search//
		} while (!targetAcquiredBinary);

		do
		{
			//This begins the work of the linear grid search//
			cout << "\nBegin linear search..";
			//This increases the linear AI grid search counter//
			++linearAiSearches;

			if (linearAiSearchGrid > badGuyLocation)
			{
				cout << "\nSearch " << linearAiSearches << " , No Joy. Continuing search.\n";
				//this increases the linear Ai search grid to move to the nextr grid//
				++linearAiSearchGrid;
			}
			else if (linearAiSearchGrid < badGuyLocation)
			{
				cout << "\nSearch " << linearAiSearches << " , No Joy. Continuing search.\n";
				//this increases the linear Ai search grid to move to the nextr grid//
				++linearAiSearchGrid;
			}
			else
			{
				cout << "\nTarget acquired at " << linearAiSearchGrid << " in " << linearAiSearches << " attempts.\n";
				//This changes the bool value for targetAcquiredLinear to true//
				targetAcquiredLinear = true;
				system("pause");
			}
			//This ends the linear search//
		} while (!targetAcquiredLinear);

		do
		{
			//This begins the work of the random grid search//
			cout << "Begin Random AI Searches";
			//This increases the counter of the random AI searches//
			++randomAiSearches;
			//This changes the random number generated for the random search each time it iterates//
			randomAiSearchGrid = rand() % 64 + 1;

			if (randomAiSearchGrid < badGuyLocation)
			{
				cout << "\nSearch " << randomAiSearches << " , No joy. Moving to next grid.\n";
			}
			else if (randomAiSearchGrid > badGuyLocation)
			{
				cout << "\nSearch " << randomAiSearches << " , No joy. Moving to next grid.\n";
			}
			else
			{
				cout << "\nSearch " << randomAiSearches << " , Targer acquired at " << randomAiSearchGrid << " in " << randomAiSearches << "attempts.\n";
				//This changes the bool value for targetAcquiredRandom to true//
				targetAcquiredRandom = true;
				system("pause");
			}
			//This ends the random AI search//
		} while (!targetAcquiredRandom);
		//This is the output to screen once game is over//
		cout << "\n_____________Summary of Searches_____________________";
		cout << "\nHuman took " << humanSearches << " attempts to find target.\n";
		cout << "\nHuman took " << binaryAiSearches << " attempts to find target.\n";
		cout << "\nHuman took " << linearAiSearches << " attempts to find target.\n";
		cout << "\nHuman took " << randomAiSearches << " attempts to find target.\n";
		cout << "\n_________________________________________________________________\n";
		
		cout <<"\nSearch again? (y or n)";
		cin >> yesORNo;
		if (yesORNo == 'y' || yesORNo == 'Y')
		{
			playAgain = true;
		}
		else
		{
			playAgain = false;
		}
		} while (playAgain);
		cout << "\nThank you for using SkyNet for your target acquistion needs.";
	return 0;
}   


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
