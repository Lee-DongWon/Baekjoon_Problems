#include <iostream>

using namespace std;

void dfs(int N, int M, int y, int x, int **arr, int **visited) {
	int dy[4] = { 1,-1,0,0 };
	int dx[4] = { 0,0,1,-1 };

	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || ny >= N || nx < 0 || nx >= M)
			continue;

		if (arr[ny][nx] && !visited[ny][nx]) {
			visited[ny][nx]++;
			dfs(N, M, ny, nx, arr, visited);
		}
	}
}
int main() {

	int M, N, K;
	int **arr = new int*[50];
	int **visited = new int*[50];

	for (int i = 0; i < 50; i++) {
		arr[i] = new int[50];
		visited[i] = new int[50];
	}

	int t, x, y;
	cin >> t;

	while (t--) {
		cin >> M >> N >> K;

		for (int i = 0; i < 50; i++) {
			for (int j = 0; j < 50; j++) {
				arr[i][j] = 0;
				visited[i][j] = 0;
			}
		}

		int ans = 0;

		for (int i = 0; i < K; i++) {
			cin >> x >> y;
			arr[y][x] = 1;
		}

		for (int i = 0; i < N; i++)
			for (int j = 0; j < M; j++)
				if (arr[i][j] && !visited[i][j]) {
					ans++;
					visited[i][j]++;
					dfs(N, M, i, j, arr, visited);
				}

		cout << ans << endl;
	}
	return 0;
}
