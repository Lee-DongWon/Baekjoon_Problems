#include <iostream>
#include <queue>
#define MAX 1001

using namespace std;

int n, m, v;
int adj[MAX][MAX];
int visit[MAX];

void dfs(int v) {
	cout << v << " ";
	visit[v] = 1;
	for (int i = 1; i <= n; i++) {
		if (visit[i] == 1 || adj[v][i] == 0) {
			continue;
		}
		dfs(i);
	}
}

void bfs(int v) {
	queue<int> q;
	q.push(v);
	visit[v] = 0;
	while (!q.empty()) {
		v = q.front();
		cout << q.front() << " ";
		q.pop();
		for (int i = 1; i <= n; i++) {
			if (visit[i] == 0 || adj[v][i] == 0) {
				continue;
			}
			q.push(i);
			visit[i] = 0;
		}
	}
}


int main() {
	int x, y;
	cin >> n >> m >> v;
	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		adj[x][y] = adj[y][x] = 1;
	}
	dfs(v);
	cout << endl;
	bfs(v);
	return 0;
}