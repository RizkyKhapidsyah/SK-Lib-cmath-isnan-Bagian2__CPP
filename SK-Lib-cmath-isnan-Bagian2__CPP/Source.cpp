
#include <iostream>
#include <cmath> // for sqrt()
#include <conio.h>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

int main() {
	float a = 2, b = -2;

	// Prints the number (1.41421)
	cout << sqrt(a) << endl;

	// Prints "nan" exception
	// sqrt(-2) is complex number
	cout << sqrt(b) << endl;

	_getch();
	return 0;
}
