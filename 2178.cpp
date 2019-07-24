#include <iostream>
#include <queue>
#include <cstdio>

using namespace std;

int n, m;
int map[100][100];
int check[100][100];
int dir[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };


void In() {
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%1d", &map[i][j]);
		}
	}
}


bool isInside(int a, int b) {
	return ((a >= 0 && a < n) && (b >= 0 && b < m));
}


int bfs() {
	int cur_y = 0, cur_x = 0;

	queue<pair<int, int>> q;
	q.push(pair<int, int>(cur_y, cur_x));
	check[cur_y][cur_x] = 1;

	while (!q.empty()) {
		cur_y = q.front().first;
		cur_x = q.front().second;
		q.pop();

		if ((cur_y == n - 1) && (cur_x == m - 1)) {
			break;
		}

		for (int i = 0; i < 4; i++) {
			int next_y = cur_y + dir[i][0];
			int next_x = cur_x + dir[i][1];

			if (isInside(next_y, next_x) && check[next_y][next_x] == 0 && map[next_y][next_x] == 1) {
				check[next_y][next_x] = check[cur_y][cur_x] + 1;
				q.push(pair<int, int>(next_y, next_x));
			}
		}
	}

	return check[n - 1][m - 1];
}


int main() {
	int result;
	In();
	result = bfs();
	printf("%d\n", result);
	return 0;
}