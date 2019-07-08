#include <iostream>

using namespace std;

float consumption, balance, bill;
int main(){

cout<< "Good day! This program is designed to caompute for your monthly water bill." << endl << endl;

cout<< "Please enter amount of gallons used this month: ";
cin>> consumption;

cout<< "Please enter unpaid balance from last month's bill: ";
cin>> balance;

	if (balance > 0)
	{
		bill= balance+20+35+(consumption*1.10);
	}

	else 
	{
		bill=35+(consumption*1.10);
	}
	
cout<< "Total amount due: " << bill << endl;



return 0;

}
