#include <iostream>
using namespace std;

int main() {
	int data[] = {64,34, 25, 11, 14, 13, 90};
	int dataSize = sizeof(data)/sizeof(data[0]);
	for (int i = 0; i < dataSize-1; i++) {
		for (int j = 0; j < dataSize-i-1; j++) {
			if (data[j] > data[j+1]) {
				swap(data[j], data[j+1]);
			}
		}
	}
	
	for (int i = 0; i < dataSize; i++) {
		cout << data[i] << " ";
	}
	return 0;
}
