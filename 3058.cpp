#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int arr[7] = { 0 };
		int min = 101, sum = 0;

		for (int j = 0; j < 7; j++) {
			cin >> arr[j];
			if (arr[j] % 2 == 0) {
				sum += arr[j];
				if (min > arr[j]) {
					min = arr[j];
				}
			}
		}

		cout << sum << " " << min << endl;
	}

	return 0;
}