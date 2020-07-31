#include <iostream>
#include <math.h>
using namespace std;
    
int main(){
    int k, min, max, frek, count = 1;
    double mean, sum = 0;
    
    cin >> k;
    int a[k];
    for (int i = 0; i < k; i++){
    cin >> a[i];
	}
    
    int n = sizeof(a) / sizeof(a[0]);
    min = a[0];
    max = a[0];
    for (int i = 0; i < n; i++){
    	if (a[i] < min){
    		min = a[i];
		}
		if (a[i] > max){
			max = a[i];
		}
		sum += a[i];
	}
	mean = sum / n;
	cout << "Nilai Minimum: " << min << "\n" << "Nilai Maksimum: " << max;
	cout << "\nRata-rata(mean): " << mean << "\n";
	
	double varians, sum_varians = 0, dev;
	for (int i = 0; i < n; i++){
		sum_varians += pow((a[i] - mean), 2);
	}
	varians = sum_varians / n;
	dev = pow((varians), 0.5);
	cout << "Standar Deviasi: " << dev << "\n";
	
	int freqm = 0, modus;
	for (int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){
			if (a[i] == -1) continue;
			else if (a[i] == a[j]){
				count += 1;
				a[j] = -1;
			}
		}
		if (a[i] != -1) cout << "Frekuensi dari " << a[i] << ": " << count << "\n";
		if (count > freqm){
			freqm = count;
			modus = a[i];
		}
		count = 1;
	}
	cout << "Modus: " << modus;
    return 0;
}

