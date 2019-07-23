#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

bool dfs(int a, bool *visited, vector<int> *adj, int *match1, int *match2) {
	if (visited[a]) {
		return false;
	}
	visited[a] = true;
	for (int b : adj[a]) {
		if (match2[b] == -1 || dfs(match2[b],visited, adj,match1, match2)) {
			match1[a] = b;
			match2[b] = a;
			return true;
		}
	}
	return false;
}

int main() {
	int n;
	bool isOdd = false;
	vector<int> adj[25];
	vector<int> odd, even;
	int match1[25] = { 0, };
	int match2[25] = { 0, };
	bool visited[25] = { false, };

	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (i == 0 && x % 2 == 1) {
			isOdd = true;
		}
		if (x % 2 == 1) {
			odd.push_back(x);
		}
		else {
			even.push_back(x);
		}
	}

	if (odd.size() != even.size()) {
		cout << "-1" << endl;
		return 0;
	}

	int size = odd.size();
	if (!isOdd) {
		swap(odd, even);
	}

	bool isPrime[2000];
	for (int i = 0; i < 2000; i++) {
		isPrime[i] = 1;
	}

	for (int i = 2; i < 2000; i++) {
		if (!isPrime[i]) {
			continue;
		}
		for (int j = i * i; j < 2000; j += i) {
			isPrime[j] = false;
		}
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (isPrime[odd[i] + even[j]]) {
				adj[i].push_back(j);
			}
		}
	}

	vector<int> result;

	for (int i : adj[0]) {
		for (int i = 0; i < 25; i++) {
			match1[i] = -1;
			match2[i] = -1;
		}
		
		int flow = 1;
		match1[0] = i;
		match2[i] = 0;

		for (int j = 1; j < size; j++) {
			for (int k = 0; k < 25; k++) {
				visited[k] = 0;
			}
			
			visited[0] = true;
			if (dfs(j, visited, adj, match1, match2)) {
				flow++;
			}
		}

		if (flow == size) {
			result.push_back(even[i]);
		}
	}
	if (result.empty()) {
		puts("-1");
	}
	else {
		sort(result.begin(), result.end());
		for (int r : result)
			printf("%d ", r);
	}
}

