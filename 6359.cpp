#include <iostream>

using namespace std;

int main() {
	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {
		int n, cnt = 0;
		int arr[101] = { 0 };

		cin >> n;

		for (int j = 1; j <= n; j++) {
			for (int k = 1; k <= 100; k++) {
				if (k%j == 0) {
					if (arr[k] == 0) {
						arr[k] = 1;
					}
					else {
						arr[k] = 0;
					}
				}
			}
		}

		for (int j = 1; j <= n; j++) {
			if (arr[j] == 1) {
				cnt++;
			}
		}

		cout << cnt << endl;
	}

	return 0;
}