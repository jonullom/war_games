// GameOn3x.cpp : This file contains the 'main' function. Program execution begins and ends there.
//JonUllom 
//12-OCT-18
//01 AssignmentGameOn!
//
//
//
//GameOver3.0
//
// #include<iostream> is the header file the compiler uses to find the file containing
//substitute code to reduce ammount of overall code needed; #include <pch.h> is something
// that the IDE explained as needed in this version of VS
//
#include <pch.h> 
#include <iostream>
//Using the using declaration makes it available to the whole code, and reduces the need repetative code by 
//by calling a specific file for use in the local code
//
using std::cout;
using std::endl;
//int main() is the function header this names the coming function code //
int main()
//the curly brace signals the start of the function//
{
	//this is declarations being called and used, in this case cout which tells the compiler to send the coming 
	//information out to the console, this information in this instance is the phrase "Game Over!", endl is 
	//used to end the line of information there is also a semicolon marking the end of the statement
	//
    cout<<"Game Over!"<<endl;
	// return 0; is how we end the program
	return 0;
	// another curly bace closes the function//
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
