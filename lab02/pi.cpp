// pi.cpp
// approximates the value of the constant pi using both the Leibniz and Wallis formula for estimating pi
// 12 October 2018

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int terms(0); // number of terms we use for estimating (as terms --> infinity, approximation becomes exact)
	double pi(1);
	cout << "Enter the number of terms to approximate (or zero to quit):" << endl;
	cin >> terms; 
	while (terms != 0) {
		for(int i = 1; i <= terms; i++) {
			pi += (pow(-1, i))/(2*i + 1); // formula
		}
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(3);
		cout << "The approximation is " << pi*4 << " using " << terms << " terms." << endl;
		cout << "Enter the number of terms to approximate (or zero to quit):" << endl;
		cin >> terms;
		pi = 1; // reset value of pi to use for subsequent calculations
	}
}