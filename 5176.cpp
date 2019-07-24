#include <iostream>

using namespace std;

int main() {
	int k;

	cin >> k;

	while (k--) {
		int p, m, num = 0;
		int temp;

		cin >> p >> m;
		int *seat = new int[m];

		for (int i = 0; i < m; i++) {
			seat[i] = 0;
		}
		for (int i = 0; i < p; i++) {
			cin >> temp;
			if (seat[temp - 1] == 0) {
				seat[temp - 1] = 1;
			}
			else {
				num++;
			}
		}

		cout << num << endl;
	}

	return 0;
}