// block.cpp
// prints out a block of characters that is based on 2 parameters (rows and columns inputted)
// 12 October 2018

#include <iostream>
using namespace std;

int main() {
	int rows, columns;
	cout << "Enter number of rows and columns:" << endl;
	cin >> rows >> columns;
	while (rows != 0 || columns != 0) {
		// nested for loop (outer-loop creates rows)
		for(int i = 0; i < rows; i++) {
			// inner-loop creates columns
			for(int j = 0; j < columns; j++) {
				cout << "X.";
			}
			cout << endl;
		}
		cout << "Enter number of rows and columns:" << endl;
		cin >> rows >> columns;
	}
}