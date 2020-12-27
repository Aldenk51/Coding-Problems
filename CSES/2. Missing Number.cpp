#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n, number;
	cin >> n;

	vector<bool> numberCheck(n);

	for (int i = 0; i < n - 1; i++) {
		cin >> number;
		numberCheck.at(number - 1) = true;
	}

	for (int i = 0; i < n - 1; i++) {
		if (numberCheck.at(i) == false) {
			cout << i + 1;
		}
	}
	return 0;
}