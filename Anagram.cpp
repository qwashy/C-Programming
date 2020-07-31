#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n, m, szA, szB, agr = 0;
	int freq[10] = {0};
	
	cout << "Masukkan banyaknya elemen A: ";
	cin >> n;
	int arrayA[n];
	
	for (int i = 0; i < n; i++){
		cout << "Masukkan elemen A ke-" << i+1 << ": ";
		cin >> arrayA[i];
	}
	
	cout << "Masukkan banyaknya elemen B: ";
	cin >> m;
	int arrayB[m];
	
	for (int i = 0; i < m; i++){
		cout << "Masukkan elemen B ke-" << i+1 << ": ";
		cin >> arrayB[i];
	}
	
	if (n != m){
		cout << "A bukan anagram dari B";
	} else if (n == m) {
		szA = sizeof(arrayA)/sizeof(arrayA[0]);
		szB = sizeof(arrayB)/sizeof(arrayB[0]);
		
		sort(arrayA, arrayA+szA);
		sort(arrayB, arrayB+szB);
		
		for (int i = 0; i < n; i++){
			if (arrayA[i] == arrayB[i]){
				agr++;
			} else {
				cout << "A bukan anagram dari B";
				break;
			}
		}
		
		if (agr == n || agr == m){
			cout << "A adalah anagram dari B";
		}
	}
	
	return 0;
}
