#include <iostream>
using namespace std;

double inflation(double p_old, double p_new);

int main() {
	double old_price(0), new_price(0), r_inflation(0);
	cout << "Enter the old price (or zero to quit):\n";
	cin >> old_price;
	while (old_price != 0) {
		cout << "Enter the new price:\n";
		cin >> new_price;
		r_inflation = inflation(old_price, new_price);
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		cout << "The inflation rate is " << r_inflation << "%" << endl;
		cout << "Enter the old price (or zero to quit):\n";
		cin >> old_price;
	}
	return 0;
}

double inflation(double p_old, double p_new) {
	return 100 * ((p_new - p_old) / p_old);
}