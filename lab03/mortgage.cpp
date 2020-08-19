#include <iostream>
using namespace std;

double annual_mortage_cost(double loan_amt, double loan_interest_rate, double loan_reduction_rate);
double annual_tax_savings(double loan_amt, double loan_interest_rate, double tax_rate);

int main() {
	double loan_interest_r(0.06), loan_reduction_r(0.03), tax_r(0.35), loan_amount(0);
	double down_payment(0), p_home(0), mortage_cost(0), tax_savings(0);
	cout << "Enter the home price (or zero to quit):\n";
	cin >> p_home;
	while (p_home != 0) {
		cout << "Enter the down payment:\n";
		cin >> down_payment;
		loan_amount = p_home - down_payment;
		mortage_cost = annual_mortage_cost(loan_amount, loan_interest_r, loan_reduction_r);
		tax_savings = annual_tax_savings(loan_amount, loan_interest_r, tax_r);
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		cout << "The after-tax cost is $" << mortage_cost - tax_savings << " annually." << endl;
		cout << "Enter the home price (or zero to quit):\n";
		cin >> p_home;
	}
	return 0;
}

double annual_mortage_cost(double loan_amt, double loan_interest_rate, double loan_reduction_rate) {
	return (loan_amt * (loan_reduction_rate + loan_interest_rate));
}

double annual_tax_savings(double loan_amt, double loan_interest_rate, double tax_rate) {
	return (tax_rate * (loan_amt * loan_interest_rate));
}