#include <iostream>
#include <cmath> 

using namespace std;

int main() {
	long long input, left, right;
	cin >> input;
	for (int i = 0; i < input; ++i) {
		cin >> left >> right;
		if ((left + right) % 3 == 0 && 2 * left >= right && 2 * right >= left) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	
	return 0;
}