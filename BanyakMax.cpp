#include <iostream>
using namespace std;

int main(){
	int n, max, count = 0;
	cin >> n;
	int nilai[n];
	
	for (int i = 0; i < n; i++){
		cin >> nilai[i];	
		while (nilai[i] > 100 || nilai[i] < 0){
			cin >> nilai[i];
		}	
	}
	
	max = nilai[0];
	for (int j = 0; j < n; j++){
		if (max < nilai[j]){
			max = nilai[j];
		}
	}
	
	for (int k = 0; k < n; k++){
		if (nilai[k] == max){
			count++;
		}
	}
	
	cout << count;
	
	return 0;
}
