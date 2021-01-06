#include <iostream>
#include<vector>

using namespace std;

int main() {
	long long input;
	cin >> input;
	vector<int> set1, set2;
	
	if ((input * (input + 1) / 2) % 2) {
		cout << "NO" << endl;
	}

	if (input % 2) {
		for (int i = 0; i <= input / 4; ++i) {
			if (i % 2) {
				set1.push_back(4 * i + 1);
				set1.push_back(4 * i + 2);
				set1.push_back(4 * i + 4);
				set2.push_back(4 * i + 3);
			}
			else {
				set2.push_back(4 * i + 1);
				set2.push_back(4 * i + 2);
				set2.push_back(4 * i + 4);
				set1.push_back(4 * i + 3);
			}
		}
		if ( (input / 4) % 2) {
			set1.pop_back();
		}
		else {
			set2.pop_back();
		}
	}
	else {
		for (int i = 0; i < input / 4; ++i) {
			set1.push_back(4 * i + 1);
			set1.push_back(4 * i + 4);
			set2.push_back(4 * i + 2);
			set2.push_back(4 * i + 3);
		}
	}

	cout << "YES" << endl << set1.size() << endl;
	for (int i : set1) {
		cout << i << " ";
	}
	cout << endl << set2.size() << endl;
	for (int i : set2) {
		cout << i << " ";
	}

	
	return 0;
}