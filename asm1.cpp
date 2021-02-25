// SEHH2042 Assignment 1
// Program template file: A1Template.cpp
// Do not modify the given codes

// Insert more header files when necessary
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void showInfo()
{
	// Fill in your personal particulars below
	cout << "Name      : Tsoi Yiu Chik\n";
	cout << "Student ID: 20195601A\n";
	cout << "Class     : 204D\n";
}

void Q1()
{
	// defining the origin coordinate.
	double xo = 0;
	double yo = 0;

	// defining the coordinate of the point on x-axis.
	// value of x1 should be as same as the x coordinate of the vertex provided by user.
	double x1;
	double y1 = 0;

	// defining variables for storing the coordinate provided by user.
	double x2;
	double y2;

	// defining variables for storing the caculated coordinate of the centroid.
	double xc;
	double yc;

	// prompting for entering coordinate of the vertex.
	cout << "Input x: " ;
	cin >> x2 ;
	cout << "Input y: " ;
	cin >> y2 ;

	// assigning value to the x coordinate of the point on x-axis.
	x1 = x2;

	// calculating and storing coordinate of the centroid.
	xc = (xo + x1 + x2)/3.00;
	yc = (yo + y1 + y2)/3.00;

	// output the result.
	cout << fixed;
	cout << setprecision(2);
	cout << "Centroid is at (" << xc << "," << yc << ")" << endl;
}

void Q2()
{
	double a, b, c ;
	cout << "Enter a b c: " ;
	cin >> a >> b >> c;

	double delta, root1, root2;
	delta = b*b - 4*a*c;

	cout<< setprecision(6) ;

	if( delta > 0 ){
		root1 = ( (-1)*b + sqrt(delta) )/2/a ;
		root2 = ( (-1)*b - sqrt(delta) )/2/a ;
		cout << root2 << " " << root1 << endl ;
	} else if( delta < 0 ){
		cout << "No solution" << endl;
	} else {
		root2 = ( (-1)*b - sqrt(delta) )/2/a ;
		cout << root2 << endl ;
	}

}

void Q3()
{
	// Insert your codes for Question 3 here
}

void Q4()
{
	// Insert your codes for Question 4 here
}

// IMPORTANT: DO NOT MODIFY main()
int main()
{
	char prog_choice;

	do {
		cout << "\n\n";
		cout << "Program Selection Menu" << endl;
		cout << "---------------------------------------" << endl;
		cout << "Enter question number ('q' to quit): ";
		cin >> prog_choice;
		cout << "\n\n";

		switch (prog_choice) {
		case '0': showInfo(); break;
		case '1': Q1(); break;
		case '2': Q2(); break;
		case '3': Q3(); break;
		case '4': Q4(); break;
		case 'q': break;
		default:
			cout << "No such question " << prog_choice << endl;
			break;
		}
	} while (prog_choice != 'q');

	cout << "Program terminates. Good bye!" << endl;
	return 0;
}
// END
