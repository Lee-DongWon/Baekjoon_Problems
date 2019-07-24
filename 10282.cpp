#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstring>
#include <string>


using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	while (t--) {

		int n, m, s;
		vector<int> directed[10001], time[10001];



		cin >> n >> m >> s;
		int *minTime = new int[n + 1];

		for (int i = 0; i < n + 1; i++) {
			minTime[i] = 0;
		}

		for (int i = 1; i < n + 1; i++) {
			directed[i].clear();
			time[i].clear();
			minTime[i] = 2e9;
		}

		for (int i = 1; i < m + 1; i++) {
			int x, y, t;
			cin >> x >> y >> t;
			directed[y].push_back(x);
			time[y].push_back(t);
		}

		priority_queue<pair<int, int> > pq;

		minTime[s] = 0;
		pq.push(make_pair(0, s));

		while (!pq.empty()) {
			int current = pq.top().second;
			int weight = -pq.top().first;
			pq.pop();

			if (minTime[current] != weight) {
				continue;
			}
			for (int i = ((int)(directed[current].size())); i--;) {
				int t = directed[current][i];
				int v = time[current][i];
				if (minTime[t] > minTime[current] + v) {
					minTime[t] = minTime[current] + v;
					pq.push(make_pair(-minTime[t], t));
				}
			}
		}

		int num = 0, total_time = 0;


		for (int i = 1; i < n + 1; i++) {
			if (minTime[i] != 2e9) {
				num++;
				total_time = max(total_time, minTime[i]);
			}
		}

		cout << num << " " << total_time << "\n";
	}
	return 0;
}