// reverseArgs.cpp
// takes command line input arguments and prints them in reverse order
// 21 October 2018

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	// for loop that iterates backwards through command line inputs
	for (int i = argc - 1; i > 1; i--) {
		cout << argv[i] << " ";
	}
	cout << argv[1] << endl;
	return 0;
}