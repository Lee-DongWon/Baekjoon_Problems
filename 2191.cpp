#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <cmath>

using namespace std;

double getdist(pair<double, double> x, pair<double, double> y) {
	return sqrt((x.first - y.first)*(x.first - y.first) + (x.second - y.second)*(x.second - y.second));
}

bool dfs(int current, int m, vector<bool> &visited, int node[101][101], vector<int> &personMatch, vector<int> &shelterMatch) {
	if (visited[current]) {
		return false;
	}
	visited[current] = true;

	for (int next = 1; next < m + 1; next++) {
		if (node[current][next]) {
			if (shelterMatch[next] == -1 || dfs(shelterMatch[next], m, visited, node, personMatch, shelterMatch)) {
				personMatch[current] = next;
				shelterMatch[next] = current;
				return true;
			}
		}
	}
	return false;
}

int main() {


	int n, m, s, t;
	cin >> n >> m;
	cin >> t >> s;


	pair<double, double> *person = new pair<double, double>[n + 1];
	pair<double, double> *shelter = new pair<double, double>[m + 1];
	int node[101][101] = { 0 };

	vector<int> personMatch = vector<int>(n + 1, -1);
	vector<int> shelterMatch = vector<int>(m + 1, -1);
	vector<bool> visit;

	for (int i = 1; i < n + 1; i++)
	{
		cin >> person[i].first >> person[i].second;
	}
	for (int i = 1; i < m + 1; i++)
	{
		cin >> shelter[i].first >> shelter[i].second;
	}

	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j < m + 1; j++) {
			double dist = getdist(person[i], shelter[j]);
			if ((double)t*s >= dist) {
				node[i][j] = 1;
			}
		}
	}

	int hide = 0;

	for (int start = 1; start < n + 1; start++) {
		visit = vector<bool>(n + 1, false);
		if (dfs(start, m, visit, node, personMatch, shelterMatch)) {
			hide++;
		}
	}

	printf("%d\n", n - hide);


	return 0;
}