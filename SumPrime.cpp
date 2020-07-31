#include <iostream>  
using namespace std;  

int main(){  
  	int n, num, sum = 2, j;
  	cin >> n;
  	int prime[n];
  	prime[0] = 2;
  	cout << prime[0] << " ";
  	
  	for (int i = 1; i < n; i++){
  		num = prime[i-1] + 1;
		j = 0;
		while (true){
			if (num % prime[j] == 0){
				num++;
				j = -1;
			}
			j++;
			if (j == i){
				prime[i] = num;
				break;
			}
		}
		cout << prime[i] << " ";
		sum += prime[i];	
	}
	cout << endl;
	cout << sum << endl;
	
	return 0;
}  
