#include <iostream>
using namespace std;

int main() {
	long long int input, set1Sum, set2Sum, setDifference, numbers[20];
	setDifference = 0;
	cin >> input;
	for (int i = 0; i < input; ++i) {
		cin >> numbers[i];
		setDifference += numbers[i];
	}
	for (int i = 0; i < 1 << input; i++) {
		set1Sum = set2Sum = 0;
		for (int j = 0; j < input; j++) {
			if (i >> j & 1) {
				set1Sum += numbers[j];
			}
			else {
				set2Sum += numbers[j];
			}
		}
		if (abs(set1Sum - set2Sum) < setDifference) {
			setDifference = abs(set1Sum - set2Sum);
		}
	}
	cout << setDifference << endl;
	return 0;
}