#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

#define INF 987654321

int N, M, T, D;

char map[26][26];
int adj[666][666];
int dy[] = { -1,0,0,1 }, dx[] = { 0,1,-1,0 };
int getAlpha(int y, int x) {
	if (map[y][x] >= 'a' && map[y][x] <= 'z') {
		return map[y][x] - 'a' + 26;
	}
	else {
		return map[y][x] - 'A';
	}
}

int main() {
	scanf("%d%d%d%d", &N, &M, &T, &D);
	for (int n = 0; n < N; n++)
		scanf("%s", map[n]);
	for (int n = 0; n < N*M; n++)
		for (int m = 0; m < N*M; m++)
			adj[n][m] = n == m ? 0 : INF;

	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			int here = n * M + m;
			for (int i = 0; i < 4; i++) {
				int y = n + dy[i], x = m + dx[i];
				if (y < 0 || y >= N || x < 0 || x >= M) continue;
				int next = y * M + x;
				int diff = getAlpha(n, m) - getAlpha(y, x);

				if (abs(diff) > T) continue;
				if (diff > 0) {
					adj[here][next] = 1;
				}
				else if (diff < 0) {
					adj[here][next] = diff * diff;
				}
				else {
					adj[here][next] = 1;
				}
			}
		}
	}
	int MAX = N * M;

	for (int k = 0; k < MAX; k++) {
		for (int n = 0; n < MAX; n++) {
			for (int m = 0; m < MAX; m++) {
				if (adj[n][m] > adj[n][k] + adj[k][m]) {
					adj[n][m] = adj[n][k] + adj[k][m];
				}
			}
		}
	}

	int ans = 0;
	for (int n = 0; n < MAX; n++) {
		if (adj[0][n] + adj[n][0] <= D) {
			ans = max(ans, getAlpha(n / M, n%M));
		}
	}

	printf("%d\n", ans);
	return 0;
}