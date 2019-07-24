#include <iostream>

using namespace std;

int main() {
	int n, k;

	cin >> n >> k;

	int *coin = new int[n];
	int *arr = new int[k + 1];
	for (int i = 0; i <= k; i++) {
		arr[i] = 0;
	}
	arr[0] = 1;

	for (int i = 0; i < n; i++) {
		cin >> coin[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= k; j++) {
			if (j >= coin[i])
				arr[j] += arr[j - coin[i]];
		}
	}

	cout << arr[k] << endl;

	return 0;
}