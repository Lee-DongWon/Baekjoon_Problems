#include <iostream>
#include <cstdio>

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
	int n, m;

	cin >> n >> m;

	int **maze = new int *[n + 1];
	for (int i = 0; i < n + 1; i++) {
		maze[i] = new int[m + 1];
	}

	int **max = new int *[n + 1];
	for (int i = 0; i < n + 1; i++) {
		max[i] = new int[m + 1];
	}

	for (int i = 0; i < n + 1; i++) {
		maze[i][0] = 0;
		max[i][0] = 0;
	}

	for (int i = 0; i < m + 1; i++) {
		maze[0][i] = 0;
		max[0][i] = 0;
	}

	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j < m + 1; j++) {
			cin >> maze[i][j];
			max[i][j] = 0;
		}
	}

	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j < m + 1; j++) {
			max[i][j] = maze[i][j] + getMax(max[i - 1][j], max[i][j - 1]);
		}
	}

	cout << max[n][m] << endl;

	return 0;
}