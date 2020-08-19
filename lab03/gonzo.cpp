#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	int value = atoi(argv[1]) % 10;
	switch (value) {
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
	for(int i = 0; i < atoi(argv[1]) - 1; i++) {
		cout << argv[2] << ", ";
	}
	cout << argv[2] << "." << endl;
	return 0;
}