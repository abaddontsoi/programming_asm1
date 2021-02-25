#include <iostream>
#include <iomanip>

using namespace std;

int main(){
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

	// assgining value to the x coordinate of the point on x-axis.
	x1 = x2;

	// calculating and storing coordinate of the centroid.
	xc = (xo + x1 + x2)/3.00;
	yc = (yo + y1 + y2)/3.00;

	// output result
	cout << fixed;
	cout << setprecision(2);
	cout << "Centroid is at (" << xc << "," << yc << ")" << endl ;
}
