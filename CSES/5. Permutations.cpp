#include <iostream>

using namespace std;

int main() {
	int input;
	cin >> input;
	if (input < 4 && input > 1) {
		cout << "NO SOLUTION";
		return 0;
	}
	for (int i = 1; i <= input/2; i++) {
		cout << (i * 2) << " ";
	}
	for (int i = 0; i <= input / 2; i++) {
		cout << (i * 2) + 1 << " ";
	}
	return 0;
}