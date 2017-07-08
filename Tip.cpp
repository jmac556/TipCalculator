#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void calculateTip(string, double&, double&);

int main()
{
	string bill;
	double tip15, tip18;
	cout << "Enter your bill: ";
	cin >> bill;

	calculateTip(bill, tip15, tip18);
	cout << "Your tips are: " << endl;
	cout << tip15 << " 15%" << endl;
	cout << tip18 << " 18%" << endl;

	return 0;
}

void calculateTip(string bill, double &tip15, double &tip18)
{
	cout << setprecision(2) << fixed;
	double numberBill = stod(bill);
	tip15 = numberBill * .15;
	tip18 = numberBill * .18;
}