#include <iostream>

using namespace std;

int main(){
	unsigned int size, init_num, space_length, text_length, temp_num;

	cout << "Size: " ;
	cin >> size ;
	cout << "First number: " ;
	cin >> init_num ;

	space_length = size - 1 ;

	for( int i=0 ; i < size; i++){
		text_length = size - space_length ;
		temp_num = init_num ;
		for(int j=0 ; j < space_length; j++){
			cout << "  ";
		}
		for(int k=0 ; k < text_length; k++){
			cout << temp_num << "#" ;
			temp_num -= 1;
		}
		cout << endl ;
		space_length-- ;
	}
}
