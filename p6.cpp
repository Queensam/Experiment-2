#include <iostream>

using namespace std;

int n,sum;

int main(){
	
	cout << "Enter a number: ";
	cin >> n;
	
for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    
    cout << "Sum = " << sum;
    
    
    return 0;
}
	

