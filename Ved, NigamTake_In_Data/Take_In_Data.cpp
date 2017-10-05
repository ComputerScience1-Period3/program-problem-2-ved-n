/*
Ved Nigam-27 September 2017-Period 3
Take_In_Data
In this assignment, we will utilize the _kbhit and _getch to take in information and display the information on our terms.
*/
//Libraries
#include <iostream>//Gives access to cin, cout, cndl, <<, >>, boolalpha, and nonboolalpha.
#include <conio.h>//Gives access to _kbhit and _getch for pause()
//Namespace	
using namespace std;
//Functions
void pause() {
	cout << "Press Any Key to Continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
//Main
void main() {
	int pets; //How many pets do you have?
	char Last_Initial; //What is the first initial of yor last name?
	bool In_WHAP; //Are you in WHAP?
	double Weight; //What is your weight(in pounds) rounded to the nearest tenth?"

	//User Queries
	cout << "How many pets do you have?";
	cin >> pets;
	cout << "What is the first letter of your last name?";
	cin >> Last_Initial;
	cout << "Are you in WHAP (1-true, 0-false)?";
	cin >> In_WHAP;
	cout << "What is your weight (in pounds) rounded to the nearest tenth?";
	cin >> Weight;

	//After questions print out stored data
	cout << "You have " << pets << "pets" << endl;
	cout << "Your last initial is " << Last_Initial << "\n";
	cout << boolalpha << "You being is WHAP is (1-True, 0-False) " << In_WHAP << "\n";
	cout << "Your weight is " << Weight << "\n";

	pause();
}

