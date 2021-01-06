#include <iostream>

using namespace std;

int main() {
	long long input, zeros;
	cin >> input;
	zeros = 0;
	for (long long i = 5; i <= input; i *= 5) {
		zeros += input / i;
	}
	
	cout << zeros << endl;
	return 0;
}