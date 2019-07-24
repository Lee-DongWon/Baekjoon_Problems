#include <iostream>

using namespace std;

int main() {
	int n;
	int sum = 0;

	cin >> n;

	int **arr = new int *[n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[10];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 10; j++) {
			if (i == 0) {
				if (j == 0) {
					arr[i][j] = 0;
				}
				else {
					arr[i][j] = 1;
				}
			}

			else {
				if (j == 0) {
					arr[i][j] = arr[i - 1][1];
				}
				else if (j == 9) {
					arr[i][j] = arr[i - 1][8];
				}
				else {
					arr[i][j] = (arr[i - 1][j - 1] + arr[i - 1][j + 1]) % 1000000000;
				}
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		sum += arr[n - 1][i];
		sum %= 1000000000;
	}


	cout << sum << endl;
	return 0;
}