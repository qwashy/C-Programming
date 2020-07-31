#include<iostream>
using namespace std;

int main() {
	int n, max = 0, snd = 0, min = 100;
	cin >> n; 
	int x[n];
	for(int i = 0; i < n; i++){
		cin >> x[i]; 
		while(x[i] < 0 || x[i] > 100) {
			cin >> x[i];
  		}
  		if(x[i] > max) max = x[i];
 	}
 
 	for(int i = 0; i < n; i++){
  		if(x[i] > snd && x[i] < max) snd = x[i];
  		if(x[i] < min) min = x[i];
 	}
 	cout << "\nNilai Max = " << max;
 	cout << "\nNilai Max 2 = " << snd;
 	cout << "\nBeda Nilai Max dan Max Kedua = " << max - snd;
 	cout << "\nSelisih Max dan Min = " << max - min;
 
 	return 0;
}
