#include <iostream>
#include <string>

using namespace std;

char arr[100][20];

int main() {
	while (1) {
		int n;
		cin >> n;

		if (n == 0) {
			return 0;
		}
		else {
			string sen;
			cin >> sen;

			int num_row = sen.length() / n;
			int num_col = n;

			for (int i = 0; i < num_row; i++) {
				if (i % 2 == 0) {
					for (int j = 0; j < num_col; j++) {
						arr[i][j] = sen.at(i*n + j);
					}
				}
				else {
					for (int j = 0; j < num_col; j++) {
						arr[i][j] = sen.at((i + 1)*n - j - 1);
					}
				}
			}

			for (int i = 0; i < num_col; i++) {
				for (int j = 0; j < num_row; j++) {
					cout << arr[j][i];
				}
			}
			cout << endl;
		}

	}
}