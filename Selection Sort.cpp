#include <iostream>
using namespace std;

int main() {
	int data[] = {5,3,7,2,0,9,4,1,8,6};
	int dataSize = sizeof(data)/sizeof(data[0]), min, temp;
	for (int i = 0; i < dataSize-1; i++) {
		min = i;
		for (int j = i + 1; j < dataSize; j++) {
			if (data[j] < data[min]) {
				min = j;
			}
		}
		swap(data[i], data[min]);
	}
	
	for (int i = 0; i < dataSize; i++) {
		cout << data[i] << " ";
	}
	return 0;
}
