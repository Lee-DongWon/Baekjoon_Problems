#include <iostream>
#include <queue>
using namespace std;

int dy[8] = { -1,-2,-2,-1,1,2,1,2 };
int dx[8] = { -2,-1,1,2,-2,-1,2,1 };

int main() {
	int T, l, sx, sy, ex, ey;
	cin >> T;

	for (int testCase = 0; testCase < T; testCase++) {

		scanf("%d %d %d %d %d", &l, &sx, &sy, &ex, &ey);

		int visited[300][300] = { 0 };

		queue<pair<int, pair<int, int>>> q;
		q.push(make_pair(0, make_pair(sy, sx)));
		visited[sy][sx]++;

		while (!q.empty()) {
			int y = q.front().second.first;
			int x = q.front().second.second;
			int cnt = q.front().first;
			q.pop();

			if (y == ey && x == ex) {
				cout << cnt << endl;
				break;
			}

			for (int i = 0; i < 8; i++) {
				int ny = y + dy[i];
				int nx = x + dx[i];

				if (ny < 0 || ny >= l || nx < 0 || nx >= l)
					continue;

				if (visited[ny][nx])
					continue;

				visited[ny][nx]++;
				q.push(make_pair(cnt + 1, make_pair(ny, nx)));
			}
		}

	}

	return 0;
}