#include <iostream>
using namespace std;

int main(){
	int tahun;
	cin >> tahun;
	
	if (tahun % 4 == 0 && tahun % 100 != 0){
		cout << "Tahun Kabisat";
	} else if (tahun % 400 == 0){
		cout << "Tahun Kabisat";
	} else {
		cout << "Bukan Tahun Kabisat";
	}
	
	return 0;
}
