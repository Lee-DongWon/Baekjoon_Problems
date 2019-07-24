#include <iostream>

using namespace std;

int main() {
	int arr[300][300] = { 0 };

	int n, m, k;

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}

	cin >> k;

	for (int a = 0; a < k; a++) {
		int i, j, x, y;
		int sum = 0;

		cin >> i >> j >> x >> y;

		for (int b = i - 1; b <= x - 1; b++) {
			for (int c = j - 1; c <= y - 1; c++) {
				sum += arr[b][c];
			}
		}

		cout << sum << endl;
	}

	return 0;
}