#include <iostream>
#include "operators.h"
#include <cmath>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
	const int months_in_year = 12;
	const int percent_denominator = 100;

	double principal = 0.0;
	double human_interest = 0.0;
	double interest = 0.0;
	int years_of_loan = 0;

	cout << "Enter the principal amount: ";
	cin >> principal;

	cout << "Enter the interest rate: ";
	cin >> human_interest;

    interest = divisor(human_interest, percent_denominator);

	cout << "Enter the years of loan: ";
	cin >> years_of_loan;

	double monthly_interest = divisor(interest, months_in_year);
	long months_of_loan = multiplier(years_of_loan, months_in_year);

    double payment = 0.0;
    payment = principal * (monthly_interest / (1 - pow((double)1 + monthly_interest, (double)-months_of_loan)));

    cout << "Payment: " << setiosflags(ios::fixed)
    << setprecision(2) <<  payment << endl;

    double currInterestPayment = 0.0;
    double currPrincipalPayment = 0.0;
    double currBalance = 0.0;

    currBalance = principal;

    

    return 0;
}