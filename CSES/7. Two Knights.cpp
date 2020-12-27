#include <iostream>

using namespace std;

int main() {
	int input;
	long long combinations;
	cin >> input;
	for (int i = 1; i <= input; i++) {
		combinations = i * i;
		combinations = combinations * (combinations - 1) / 2;
		if (i > 2) {
			combinations -= 4 * (i - 1) * (i - 2);
		}
		cout << combinations << endl;
	}
	
	return 0;
}