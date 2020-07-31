#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int n;
	cin >> n;
	for (int col=0; col<=n; col++){
		for (int row=0; row<=n; row++){
			if (col==0 && row==0){
				cout << setw(5) << "*";
			} else if (col!=0 && row==0){
				cout << setw(5) << col;
			} else if (col==0 && row!=0){
				cout << setw(5) << row;
			} else {
				cout << setw(5) << col*row;
			}
		}
		cout << endl;
	}
	
	return 0;
}
