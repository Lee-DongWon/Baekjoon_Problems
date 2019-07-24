#include <iostream>

using namespace std;

int main() {
	int t;

	cin >> t;

	while (t--) {
		int n, temp, dist = 0;
		int arr[20] = { 0 };
		cin >> n;

		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
				if (arr[i] > arr[j]) {
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}

		dist = 2 * (arr[n - 1] - arr[0]);

		cout << dist << endl;
	}

	return 0;
}