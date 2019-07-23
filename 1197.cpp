#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <fstream>
#include <string>

using namespace std;

typedef pair<int, int> iPair;

void addEdge(vector<pair<int, int>> *adj, int a, int b, int weight) {
	adj[a].push_back(make_pair(b, weight));
	adj[b].push_back(make_pair(a, weight));
}

int MST(vector<pair<int, int>> *adj, int vertex) {
	priority_queue <iPair, vector<iPair>, greater<iPair>>pq;

	int src = 1;

	int max = 987654321;
	int total_dist = 0;

	vector<int> distance(vertex + 1, max);
	vector<int> parent(vertex + 1, -1);
	vector<bool> visited(vertex + 1, false);

	pq.push(make_pair(0, src));
	distance[1] = 0;

	while (!pq.empty()) {
		int start = pq.top().second;
		pq.pop();

		visited[start] = true;

		for (auto x : adj[start]) {
			int next = x.first;
			int weight = x.second;

			if (visited[next] == false && distance[next] > weight) {
				distance[next] = weight;
				pq.push(make_pair(distance[next], next));
				parent[next] = start;
			}
		}
	}

	for (int i = 1; i < vertex + 1; i++) {
		total_dist += distance[i];
	}
	return total_dist;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;

	cin >> n >> m;

	vector<iPair> adj[10001];

	while (m--) {
		int a, b, weight;

		cin >> a >> b >> weight;

		addEdge(adj, a, b, weight);
	}

	int result = MST(adj, n);


	cout << result << "\n";

	return 0;
}