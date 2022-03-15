#include "mat.hpp"

#include <iostream>
#include <stdexcept>
using namespace std;
int main(){
	int row;
	int col;
	char a;
	char b;
  
    
    cout << "Enter the number of row: ";
    cin >> row;
	cout << "Enter the number of col: ";
    cin >> col;
	cout << "Enter the  first Symbol: ";
    cin >> a;
	cout << "Enter the second Symbol: ";
    cin >> b;


    
    try {
		cout << ariel::mat(col, row, a, b) << endl; // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "Mat size is always odd"
	}
}