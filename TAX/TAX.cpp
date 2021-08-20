#include<iostream>

using namespace std;
//this program dose a simple calculating for taxes.

void tax() {
	system("color 4");//set screen colour to RED.
	double income, tax = 0;
	cout << "enter you income : ";
	do {//loop that keep asking for input till the user break it.
		cin >> income;//get input.
		if (income >= 35000) {
			tax = income * 0.2;//caculating the income with taxes
			income -= tax;
			cout << income << " income after taxes(20%)\a" << endl;
		}
		else if (income >= 20000) {
			tax = income * 0.15;
			income -= tax;
			cout << income << " income after taxes(15%)\a" << endl;
		}
		else if (income >= 10000) {
			tax = income * 0.1;
			income -= tax;
			cout << income << " income after taxes(10%)\a" << endl;
		}
		else
			cout << income << " income with no taxes\a" << endl;


	} while (income != 0);//loop breaks when input 0
	cout << "no income\a";
}
int main() {
	tax();
}
