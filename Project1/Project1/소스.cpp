#include<iostream>
using namespace std;

void main() {
	// changed nine-by-nine
	for (int i = 1; i <= 9;i++) {
		for (int j = 1; j <= 9; j++) {
			cout << i << " x " << j << " = " << i * j << "\n";
		}
	}
}