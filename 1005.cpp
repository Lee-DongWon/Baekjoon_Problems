#include <iostream>
#include <cstdio>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		int maxtime = 0;

		cin >> n >> m;
		int *tasktime = new int[n + 1];
		int *indgree = new int[n + 1];
		int *criticaltime = new int[n + 1];
		int *visited = new int[n + 1];
		vector<int> *nexttask = new vector<int>[n + 1];

		for (int i = 0; i < n + 1; i++) {
			indgree[i] = 0;
			criticaltime[i] = 0;
			visited[i] = 0;
		}

		for (int i = 1; i < n + 1; i++) {
			cin >> tasktime[i];
		}

		for (int i = 0; i < m; i++) {
			int a, b;
			cin >> a >> b;
			nexttask[a].push_back(b);
			indgree[b]++;
		}

		queue<int> q;

		for (int i = 1; i < n + 1; i++) {
			if (indgree[i] == 0) {
				q.push(i);
			}
		}

		while (!q.empty()) {
			int current = q.front();
			q.pop();
			for (int next : nexttask[current]) {
				criticaltime[next] = max(criticaltime[next], criticaltime[current] + tasktime[current]);
				indgree[next]--;
				if (indgree[next] == 0) {
					q.push(next);
				}
			}
		}

		for (int i = 1; i < n + 1; i++) {
			if (indgree[i] != 0) {
				printf("-1\n");

				return 0;
			}
		}
		int k;
		cin >> k;

		printf("%d\n", criticaltime[k] + tasktime[k]);
	}
	return 0;
}