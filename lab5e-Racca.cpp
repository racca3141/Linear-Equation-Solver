// Emerson Racca
// 09/27/2021
// Lab 5e - Linear Equation Solver
/*
Create an app that shows the 2-step math required to solve a linear equation of the form ax + b = c.

1. Get the values a, b, c from the user.
2. Display the equation.
3. Show the steps to solve it.
4. Ask the user if they would like to run again.

Solve any linear equation of the form:   ax + b = c

Examples

Your equation:    3x + 5 = 8
First step:       3x = 3
Second step:      x = 1

Would you like to run again (y or n)?
Try to make it look nice if b is negative:

Your equation:    5x - 7 = -4
First step:       5x = 3
Second step:      x = 0.6

Would you like to run again (y or n)?
That is, it is ugly to see

Your equation:    5x + -7 = -4
*/

#include<iostream>
using namespace std;

int main(){
	double a, b, c;
	char tryAgain;

	cout << "Linear Equation Solver\n";
	cout << "This app shows the 2-step math required to solve a linear equation of the form ax + b = c.\n";

	do {
		do {
			cout << "\nWhat is the value of a? ";
			cin >> a;
			if (a == 0) cout << "The value of a cannot be 0. Try again.\n";
		} while (a == 0);

		cout << "What is the value of b? ";
		cin >> b;

		cout << "What is the value of c? ";
		cin >> c;

		if (b < 0) // Should ax = c be displayed when b == 0? I chose not to do this.
			cout << "\nYour equation:\t" << a << "x - " << -1 * b << " = " << c;
		else
			cout << "\nYour equation:\t" << a << "x + " << b << " = " << c;

		cout << "\nFirst Step:\t" << a << "x = " << c - b;
		cout << "\nSecond Step:\t" << "x = " << (c - b) / a;

		cout << "\n\nWould you like to run again (y or n)? ";
		cin >> tryAgain;
	} while (tryAgain == 'y');

	return 0;
}
