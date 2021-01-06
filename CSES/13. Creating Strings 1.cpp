#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;

int main() {
	string input;
	cin >> input;
	sort(input.begin(), input.end());
	vector<string> output;
	do {
		output.push_back(input);
	} while (next_permutation(input.begin(), input.end() ));
	cout << output.size() << endl;
	for (string x : output) {
		cout << x << endl;
	}
	return 0;
}