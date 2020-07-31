#include<iostream>
using namespace std;

double avg (int arr[], int i, int n, double result) {
	if (i == n) {
		result = result/n;
		return result;
	} else {
		result += result + arr[i];
		return avg(arr, i+1, n, result);
	}
}

int main(){
	int n;
	cin >> n;
	int array[n];
	
	for (int i = 0; i < n; i++){
		cin >> array[i];
	}
	
	cout << avg(array, 0, n, 0);
}
