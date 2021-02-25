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
	// declares the origin coordinate.
	double xo = 0;
	double yo = 0;

	// declares the coordinate of the point on x-axis.
	// value of x1 should be as same as the x coordinate of the vertex provided by user.
	double x1;
	double y1 = 0;

	// defining variables for storing the coordinate provided by user.
	double x2;
	double y2;

	// declares variables for storing the caculated coordinate of the centroid.
	double xc;
	double yc;

	// prompts for entering coordinate of the vertex.
	cout << "Input x: " ;
	cin >> x2 ;
	cout << "Input y: " ;
	cin >> y2 ;

	// assigns value to the x coordinate of the point on x-axis.
	x1 = x2;

	// calculates and stores coordinate of the centroid.
	xc = (xo + x1 + x2)/3.00;
	yc = (yo + y1 + y2)/3.00;

	// outputs the result.
	cout << fixed;
	cout << setprecision(2);
	cout << "Centroid is at (" << xc << "," << yc << ")" << endl;
}

void Q2()
{
	// declares variables for inputting values of a,b,c in the fomula.
	double a, b, c ;

	// prompts for user input.
	cout << "Enter a b c: " ;
	cin >> a >> b >> c;

	// declares variables for storing the value of delta and 2 different roots.
	double delta, root1, root2;

	// calculates delta to check whether the equation has root(s).
	delta = b*b - 4*a*c;

	cout << setprecision(6) ;

	if( delta > 0 ){
		// calculates roots when delta > 0 , and displays those results.
		root1 = ( (-1)*b + sqrt(delta) )/2/a ;
		root2 = ( (-1)*b - sqrt(delta) )/2/a ;
		cout << root2 << " " << root1 << endl ;
	} else if( delta < 0 ){
		// displays message when the equation has no real solution.
		cout << "No solution" << endl;
	} else {
		// caculates and displays the repeated root.
		root2 = ( (-1)*b - sqrt(delta) )/2/a ;
		cout << root2 << endl ;
	}

}

void Q3()
{
	// declares variables for remaining money and day number.
	int remaining, day_num = 0;

	// prompts for user entering starting money.
	cout << "Starting money: $" ;
	cin >> remaining ;
	
	// the reason of using do while loop is for displaying initial amount of money.
	do {
		// calculates the remaining money
		remaining -= day_num ;
		cout << "Day " << day_num << " you spend $" << day_num << " so you have $" << remaining << endl;
		
		// adjusts the value for calculating next day's remaining.
		day_num++ ;
	} while( remaining > 0 ); // keeps the loop running when remaining money > 0 .
}

void Q4()
{
	// using unsigned data type for storing values to prevent error cause by negative value.
	unsigned int size, init_num, space_length, text_length, temp_num;

	// prompts for user entering size and the first number.
	cout << "Size: " ;
	cin >> size ;
	cout << "First number: " ;
	cin >> init_num ;

	// space_length stores the value of how many "  " should be appeared in each row of the triangular pattern.
	// reason of -1 for size is the first row of the pattern set of "first number + #", for example, 
	// if the size of the pattern and first number are 6 and 8, in the first row, out put will be 4 sets of "  " and "8#"
	space_length = size - 1 ;


	// the outer for loop is controlling how many layers should be appeared in output.
	// i, j, k are loop counters
	for( int i=0 ; i < size; i++){
		// the text_length is about how many sets of "number+#" should be appeared in each row.
		text_length = size - space_length ;
		
		// temp_num is a variable storing a temporary number which is going to be presented and caculated.
		temp_num = init_num ;
		
		// first layer inner loop for outputting "  " in the current row.
		for(int j=0 ; j < space_length; j++){
			cout << "  ";
		}
		
		// second layer inner loop for outputting "number+#" in the current row.
		for(int k=0 ; k < text_length; k++){
			cout << temp_num << "#" ;
			
			// -1 for temp_num makes the numbers in each row is in descending order.
			temp_num -= 1;
		}
		
		cout << endl ;
		
		// -1 set of "  " in the next row's output.
		space_length-- ;
	}
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
