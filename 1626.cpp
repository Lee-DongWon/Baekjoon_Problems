#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
#include <string>

using namespace std;

int find_parent(int x, int *parent) {
	if (parent[x] == x) {
		return x;
	}
	return parent[x] = find_parent(parent[x], parent);
}

void join(int x, int y, int *parent) {
	parent[find_parent(x, parent)] = find_parent(y, parent);
}

int getMax(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, a, b, c, current1 = 0, current2 = 0;
	int min_dist = 0, second_dist = 0;
	int result = 987654321;
	int cnt = 0;


	cin >> n >> m;

	vector<pair<int, pair<int, int>>> edge;
	vector<pair<int, int>> adj[50005];
	int parent[50005] = { 0, };
	int inMST[200005] = { 0, };
	int depth[50005] = { 0, };
	int stack[50005] = { 0, };
	int visited[50005] = { 0, };

	int **parentLCA = new int *[n + 1];
	for (int i = 0; i < n + 1; i++) {
		parentLCA[i] = new int[20];
	}

	int **value = new int *[n + 1];
	for (int i = 0; i < n + 1; i++) {
		value[i] = new int[20];
	}

	int **value2 = new int *[n + 1];
	for (int i = 0; i < n + 1; i++) {
		value2[i] = new int[20];
	}

	for (int i = 0; i < n + 1; i++) {
		for (int j = 0; j < 20; j++) {
			parentLCA[i][j] = 0;
			value[i][j] = 0;
			value2[i][j] = 0;
		}
	}

	for (int i = 1; i < m + 1; i++) {
		cin >> a >> b >> c;
		edge.push_back(make_pair(c, make_pair(a, b)));
	}

	sort(edge.begin(), edge.end());
	for (int i = 1; i < n + 1; i++) {
		parent[i] = i;
	}

	for (int i = 0; i < edge.size() && cnt < n - 1; i++) {
		if (find_parent(edge[i].second.first, parent) != find_parent(edge[i].second.second, parent)) {
			join(edge[i].second.first, edge[i].second.second, parent);
			adj[edge[i].second.first].push_back(make_pair(edge[i].second.second, edge[i].first));
			adj[edge[i].second.second].push_back(make_pair(edge[i].second.first, edge[i].first));
			cnt++;
			min_dist += edge[i].first;
			inMST[i] = 1;
		}
	}

	if (cnt == n - 1) {
		for (int i = 1; i < n + 1; i++) {
			if (adj[i].size()) {
				int index = 0;
				stack[index++] = i;
				visited[i] = 1;
				depth[i] = 0;
				while (index) {
					int now = stack[--index];
					for (auto x : adj[now]) {
						if (visited[x.first]) {
							continue;
						}
						visited[x.first] = 1;
						stack[index++] = x.first;
						depth[x.first] = depth[now] + 1;
						parentLCA[x.first][0] = now;
						value[x.first][0] = x.second;
						for (int j = 1; (1 << j) <= depth[x.first]; j++) {
							parentLCA[x.first][j] = parentLCA[parentLCA[x.first][j - 1]][j - 1];
							if (value[x.first][j - 1] > value[parentLCA[x.first][j - 1]][j - 1]) {
								value[x.first][j] = value[x.first][j - 1];
								value2[x.first][j] = getMax(value2[x.first][j - 1], value[parentLCA[x.first][j - 1]][j - 1]);
							}
							else if (value[x.first][j - 1] < value[parentLCA[x.first][j - 1]][j - 1]) {
								value[x.first][j] = value[parentLCA[x.first][j - 1]][j - 1];
								value2[x.first][j] = getMax(value[x.first][j - 1], value2[parentLCA[x.first][j - 1]][j - 1]);
							}
							else {
								value[x.first][j] = value[x.first][j - 1];
								value2[x.first][j] = getMax(value2[x.first][j - 1], value2[parentLCA[x.first][j - 1]][j - 1]);
							}
						}
					}
				}
				break;
			}
		}
		for (int i = 0; i < edge.size(); i++) {
			if (inMST[i]) {
				continue;
			}
			current1 = edge[i].second.first;
			current2 = edge[i].second.second;
			int temp = -1;
			if (depth[current1] > depth[current2]) {
				int difference = depth[current1] - depth[current2];
				while (difference) {
					int k = 0;
					while (difference >= (1 << (k + 1))) {
						k++;
					}
					if (value[current1][k] > temp && value[current1][k] != edge[i].first) {
						temp = value[current1][k];
					}
					else if (value2[current1][k] > temp && value2[current1][k] != edge[i].first) {
						temp = value2[current1][k];
					}
					current1 = parentLCA[current1][k];
					difference = depth[current1] - depth[current2];
				}
			}
			else if (depth[current1] < depth[current2]) {
				int difference = depth[current2] - depth[current1];
				while (difference) {
					int k = 0;
					while (difference >= (1 << (k + 1))) {
						k++;
					}
					if (value[current2][k] > temp && value[current2][k] != edge[i].first) {
						temp = value[current2][k];
					}
					else if (value2[current2][k] > temp && value2[current2][k] != edge[i].first) {
						temp = value2[current2][k];
					}
					current2 = parentLCA[current2][k];
					difference = depth[current2] - depth[current1];
				}
			}
			int k;
			while (current1 != current2) {
				k = 0;
				while (parentLCA[current1][k + 1] != parentLCA[current2][k + 1]) {
					k++;
				}
				if (value[current1][k] > temp && value[current1][k] != edge[i].first) {
					temp = value[current1][k];
				}
				else if (value2[current1][k] > temp && value2[current1][k] != edge[i].first) {
					temp = value2[current1][k];
				}
				if (value[current2][k] > temp && value[current2][k] != edge[i].first) {
					temp = value[current2][k];
				}
				else if (value2[current2][k] > temp && value2[current2][k] != edge[i].first) {
					temp = value2[current2][k];
				}
				current1 = parentLCA[current1][k];
				current2 = parentLCA[current2][k];
			}
			if (temp == -1) {
				continue;
			}
			second_dist = min_dist - temp + edge[i].first;
			if (result > second_dist) {
				result = second_dist;
			}
		}
	}



	if (result == 987654321) {
		cout << "-1\n";

	}
	else {
		cout << result << "\n";

	}


	return 0;
}