#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m, cnt = 0;
		queue<pair<int, int>> q;
		priority_queue<int> pq;

		scanf("%d %d", &n, &m);
		for (int i = 0; i < n; i++) {
			int a;
			scanf("%d", &a);
			q.push({ i,a });
			pq.push(a);
		}

		while (!q.empty()) {
			int index = q.front().first;
			int value = q.front().second;
			q.pop();

			if (pq.top() == value) {
				pq.pop();
				cnt++;
				if (index == m) {
					printf("%d\n", cnt);
					break;
				}
			}
			else {
				q.push({ index,value });
			}
		}
	}
	return 0;
}