#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n, j, prime = 0;
	cin >> n;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < i; j++){
			if (j % i == 0){
				prime += 1;
			}
		}
	}
	
	if (prime == 1){
		cout << j << " ";
	}
	return 0;
}

