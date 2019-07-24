#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;

int findSet(int x, int *parent) {
	if (x == parent[x]) {
		return x;
	}
	int j = findSet(parent[x], parent);
	parent[x] = j;
	return j;
}

void merge(int x, int y, int *parent) {
	int height_x = 0, height_y = 0;
	while (x != parent[x])
	{
		x = parent[x];
		height_x++;
	}
	while (y != parent[y])
	{
		y = parent[y];
		height_y++;
	}
	if (height_x > height_y) {
		parent[y] = x;
	}
	else {
		parent[x] = y;
	}
}


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	int n, m;

	cin >> n >> m;

	int *parent = new int[n + 1];

	for (int i = 0; i < n + 1; i++) {
		parent[i] = i;
	}

	while (m--) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 0) {
			merge(b, c, parent);
		}
		else if (a == 1) {
			if (findSet(b, parent) != findSet(c, parent)) {


				cout << "NO\n";
			}
			else {

				cout << "YES\n";
			}
		}
		else {
			continue;
		}
	}


	return 0;
}