// gonzo.cpp
// takes two command line input arguments, a number N and a name
// prints out the remainder of N divded by 10, and prints out the name N times
// 21 October 2018
	
#include <iostream>
#include <cstdlib> // for atoi
using namespace std;

int main(int argc, char *argv[]) {
	int value = atoi(argv[1]) % 10; // converts character array to integer for valid computation
	switch (value) { // redundant, but necessary to meet lab requirements --> outputs the corresponding word for an integer remainder
		case 0:
		cout << argv[1] << " divided by ten leaves a remainder of zero." << endl;
		break;
		case 1:
		cout << argv[1] << " divided by ten leaves a remainder of one." << endl;
		break;
		case 2:
		cout << argv[1] << " divided by ten leaves a remainder of two." << endl;
		break;
		case 3:
		cout << argv[1] << " divided by ten leaves a remainder of three." << endl;
		break;
		case 4:
		cout << argv[1] << " divided by ten leaves a remainder of four." << endl;
		break;
		case 5:
		cout << argv[1] << " divided by ten leaves a remainder of five." << endl;
		break;
		case 6:
		cout << argv[1] << " divided by ten leaves a remainder of six." << endl;
		break;
		case 7:
		cout << argv[1] << " divided by ten leaves a remainder of seven." << endl;
		break;
		case 8:
		cout << argv[1] << " divided by ten leaves a remainder of eight." << endl;
		break;
		case 9:
		cout << argv[1] << " divided by ten leaves a remainder of nine." << endl;
		break;
	}
	// outputs name N - 1 times 
	for(int i = 0; i < atoi(argv[1]) - 1; i++) {
		cout << argv[2] << ", ";
	}
	// allows program to finish with not trailing whitespace
	cout << argv[2] << "." << endl;
	return 0;
}