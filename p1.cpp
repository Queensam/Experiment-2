#include <iostream>

using namespace std;

int package, hours, bill;

int main(){
	
cout<< "Good Day! Please enter the package you availed (1 for A, 2 for B, 3 for C): ";
cin>> package;

cout<< "Please enter the number of hours used:";
cin>> hours;
		
		if (package == 1)
		{
						
			if (hours <= 10)
			{
				bill=995;
			}
			
			else if (hours > 10)
			{
				bill=995+((hours-10)*20);
			}
		}
		
		
		if (package == 2)
		{		   
			
			if (hours <= 20)
			{
				bill=1495;
			}
			
			else if (hours > 20)
			{
				bill=1495+((hours-20)*10);
			}
		}
		
			
		else if (package == 3)
		{
				bill=1995;
		}
		
		else{
			cout << "Invalid" << endl;
		}
			
	
cout<< "Total amount due: "<< bill << endl;


return 0;


}
	
