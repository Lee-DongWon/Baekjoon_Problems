#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
	int t;

	cin >> t;

	while (t--) {
		char arr[100][100];
		int length;
		string str;
		cin >> str;

		length = (int)sqrt((double)str.length());

		for (int i = 0; i < length; i++) {
			for (int j = 0; j < length; j++) {
				arr[i][j] = str[i*length + j];
			}
		}

		for (int i = length - 1; i >= 0; i--) {
			for (int j = 0; j < length; j++) {
				cout << arr[j][i];
			}
		}

		cout << endl;
	}
}