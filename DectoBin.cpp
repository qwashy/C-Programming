#include <iostream>
using namespace std;

int main(){
	int dec, i = 0, bin[32];
	
	cin >> dec;
	
	while (dec > 0){
		bin[i] = dec % 2;
		dec = dec / 2;
		i++;	
	} 
	
	for (int j = i-1; j>=0; j--){
		cout << bin[j];
	}
	
	return 0;
}
