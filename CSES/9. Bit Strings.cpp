#include <iostream>
#include<vector>

using namespace std;

int main() {
	long long input, output, m;
	cin >> input;
	output = 1;
	m = 1000000007;
	for (int i = 0; i < input; ++i) {
		output *= 2;
		output = output % m;
	}
	cout << output << endl;
	return 0;
}