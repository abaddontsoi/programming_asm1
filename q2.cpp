#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

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
		return 0;
	} else {
		root2 = ( (-1)*b - sqrt(delta) )/2/a ;
		cout << root2 << endl ;
	}
	return 0;

}
