#include<iostream>

using namespace std;

int main() {
	string input;
	cin >> input;

	int max, temp;
	temp = max = 1;

	for (unsigned i = 0; i < input.length() - 1; i++) {
		if (input.at(i) == input.at(i + 1)) {
			temp++;
			if (temp > max) {
				max = temp;
			}
		}
		else {
			temp = 1;
		}
	}
	cout << max;

	return 0;
}