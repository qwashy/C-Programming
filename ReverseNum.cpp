#include <iostream>
using namespace std;

int main(){
	int num, digit, rev = 0;
	cin >> num;
	
	do {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    } while (num != 0);
    
    cout << rev;
	
	return 0;
}
