#include <iostream>

using namespace std;

int getMax(int a, int b) {
	if (a < b) {
		return b;
	}
	else {
		return a;
	}
}

int main() {
	int t;

	cin >> t;

	while (t--) {
		int n;

		cin >> n;

		int **sticker = new int *[2];
		for (int i = 0; i < 2; i++) {
			sticker[i] = new int[n];
		}

		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < n; j++) {
				cin >> sticker[i][j];
			}
		}

		int **max = new int *[2];
		for (int i = 0; i < 2; i++) {
			max[i] = new int[n];
		}

		max[0][0] = sticker[0][0];
		max[1][0] = sticker[1][0];
		max[0][1] = getMax(max[0][0], sticker[0][1] + sticker[1][0]);
		max[1][1] = getMax(max[1][0], sticker[0][0] + sticker[1][1]);

		for (int i = 2; i < n; i++) {
			max[0][i] = getMax(sticker[0][i] + getMax(max[1][i - 1], max[1][i - 2]), max[0][i - 1]);
			max[1][i] = getMax(sticker[1][i] + getMax(max[0][i - 1], max[0][i - 2]), max[1][i - 1]);
		}

		int result = getMax(max[0][n - 1], max[1][n - 1]);

		cout << result << endl;
	}
}