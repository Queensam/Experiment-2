#include <iostream>;
using namespace std;

int main()
{
	int i, num1 = 1, num2 = 1, num3;
 
   for ( i = 1; i < 21 ; i++ )
   {
      if ( i <= 1 )
         num3 = i;
      else
      {
         num3 = num1 + num2;
         num1 = num2;
         num2 = num3;
      }
      cout << num3 << ", ";
   }
	
	return 0;
}
