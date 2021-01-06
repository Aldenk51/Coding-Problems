#include <iostream>
#include <set>

using namespace std;

int main() {
	int input, input2;
	set<int> numbers;

	cin >> input;
	for (int i = 0; i < input; i++) {
		cin >> input2;
		numbers.insert(input2);
	}
	cout << numbers.size();

	return 0;
}