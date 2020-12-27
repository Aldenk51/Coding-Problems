#include <iostream>

using namespace std;

int main() {
	int input, xi, xii;
	long long int turns;
	turns = 0;
	cin >> input;
	cin >> xi;
	cin >> xii;
	for (int i = 0; i < input - 1; i++) {
		while (xi > xii) {
			xii++;
			turns++;
		}
		xi = xii;
		cin >> xii;
	}
	cout << turns;
	return 0;
}