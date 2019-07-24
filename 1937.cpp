#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int dfs(int n, int y, int x, int **dp, int **map, int *dx, int *dy) {
	if (dp[y][x]) {
		return dp[y][x];
	}
	dp[y][x] = 1;

	for (int i = 0; i < 4; i++) {
		int next_x = x + dx[i];
		int next_y = y + dy[i];

		if (next_y < 0 || next_y >= n || next_x < 0 || next_x >= n) {
			continue;
		}
		if (map[y][x] >= map[next_y][next_x]) {
			continue;
		}
		dp[y][x] = max(dp[y][x], dfs(n, next_y, next_x, dp, map, dx, dy) + 1);
	}

	return dp[y][x];
}


int main() {
	int dx[4] = { -1,0,1,0 };
	int dy[4] = { 0, 1, 0, -1 };
	int n;

	cin >> n;

	int **dp = new int *[n];
	int **map = new int *[n];

	for (int i = 0; i < n; i++) {
		dp[i] = new int[n];
		map[i] = new int[n];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &map[i][j]);
			dp[i][j] = 0;
		}
	}

	int result = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (result < dfs(n, i, j, dp, map, dx, dy)) {
				result = dfs(n, i, j, dp, map, dx, dy);
			}
		}
	}

	printf("%d\n", result);
	return 0;
}