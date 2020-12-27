#include <iostream>
#include <math.h>

using namespace std;

int main() {
	long long input, row, column, answer;
	cin >> input;
	for (int i = 0; i < input; i++) {
		cin >> row;
		cin >> column;
		if (row >= column) {
			if (row % 2 == 0) {
				answer = row * row - column + 1;
				cout << answer << endl;
			}
			else {
				answer = (row - 1) * (row - 1) + column;
				cout << answer << endl;
			}
		}
		else {
			if (column % 2 == 1) {
				answer = column * column - row + 1;
				cout << answer << endl;
			}
			else {
				answer = (column - 1) * (column - 1) + row;
				cout << answer << endl;
			}
		}
	}
	return 0;
}