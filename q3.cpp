#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	int remaining, day_num = 0;

	cout << "Starting money: $" ;
	cin >> remaining ;

	do {
		remaining -= day_num ;
		cout << "Day " << day_num << " you spend $" << day_num << " so you have $" << remaining << endl;
		day_num++ ;
	} while( remaining > 0 );
}
