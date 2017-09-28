/*
Isaiah Dunegan - 9/22/17 P1
Assignment Name: Display Text
Create a program that displays text
*/
//variables
int a;
//Libraries
#include <iostream> //so that's a bunch of alpha variables and <<>>
#include <conio.h> // _kbhit and _getch
//Namespaces
using namespace std; //*
//Functions()
void pause() {
	cout << "Press any key to continue . . .\n";
	while (!_kbhit());
		_getch();
		cout << '\n';
}
// MAIN
void main() {
	cout << "hello world!!!\n";
	cout << "isaiah d. made this\n";
	int a = 1;
	cout << a << '\n';
	pause();
}