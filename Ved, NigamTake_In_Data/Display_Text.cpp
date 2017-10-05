/*
Ved Nigam-September 21 2017-Period 3
Assignment Name: Display Text
Intro to C++ Visual Studios 2015 and creating a new project
Displaying text to the console from code
*/
//Libraries
#include <iostream>//Endl << >> cin cout
#include <conio.h>//gives access to _kbhit() and _getch() for the pause function

//Namespaces
using namespace std;

//Functions
void pause() {//Acts as system ("pause")
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << "\n";
}

//Main
void main() {
	int p;
	p = 3;
	cout << "Hello World" << endl;
	cout << "My Name is Ved Nigam" << endl;
	cout << "I am in Period:" << endl;
	cout << p << endl;
	pause();//To see what happens



}