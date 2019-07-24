#include <iostream>

using namespace std;

int main() {
	int n, m, cnt = 0;

	cin >> n;
	cin >> m;

	int *source = new int[n];
	int *check = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> source[i];
		check[i] = 0;
	}

	for (int i = 0; i < n; i++) {
		if (check[i] == 0) {
			for (int j = i + 1; j < n; j++) {
				if (source[j] == m - source[i] && check[j] == 0) {
					cnt++;
					check[i] = 1;
					check[j] = 1;
				}
			}
		}
	}

	cout << cnt << endl;

	return 0;
}