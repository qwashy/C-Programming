#include<iostream>
using namespace std;

int main() {
    int n, modus = 1;
    cin >> n;
    int nilai[n];
    for (int i = 0; i < n; i++){
        cin >> nilai[i];
    }
    int num = nilai[0];
    for (int i = 0; i < n-1; i++){
        int tmp = 1;
        for (int j = i+1; j < n; j++){
            if (nilai[i] == nilai[j]){
                tmp++;
            }
        }
        if (tmp > modus){
            num = nilai[i];
            modus = tmp;
        }
    }

    cout << num << " " << modus << endl;

	return 0;
}
