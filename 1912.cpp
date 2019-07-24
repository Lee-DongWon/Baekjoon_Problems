#include <iostream>

using namespace std;

int main() {
	int n, max;
	int arr[100002] = { 0 };
	int result[100002] = { 0 };

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	for (int i = 1; i <= n; i++) {
		if (result[i - 1] + arr[i] > arr[i]) {
			result[i] = result[i - 1] + arr[i];
		}
		else {
			result[i] = arr[i];
		}
	}

	max = result[1];
	for (int i = 2; i <= n; i++) {
		if (max < result[i]) {
			max = result[i];
		}
	}

	cout << max << endl;

	return 0;
}