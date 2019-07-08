#include <iostream>
#include <cmath>

using namespace std;

int x,y;
float V,z;

int main()
{
	
	cout<<"Please enter value for x:";
	cin>> x;
	cout<<"Please enter value for y:";
	cin>> y;
	
	z=2.5;
	if (x=1 && 1<y && y<5)
	{
		V=x*y*z;
	}
	
	else if (x=1 && y>=5)
	{
		V=x+(y/z); 
	}
	
	else if (x=2 && y<=5)
	{
		V=abs((x-y)/z);
	}
	
	else if (x=2 && y>5)
	{
		V= x-sqrt(y + z);
	}
	
	else 
	{
		V= x + y + z; 	
	}
	
	cout<< "V= " << V << endl;
	
	
	return 0;
}
