/*
Your task is to count for k=1,2,…,n the number of ways two knights can be placed on a k×k chessboard so that they do not attack each other.

Input:
8

Output:
0
6
28
96
252
550
1056
1848
/**/


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
