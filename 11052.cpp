#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	int arr[1001] = { 0 };
	int maxprice[1001] = { 0 };

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		maxprice[i] = arr[i];
	}

	maxprice[1] = arr[1];

	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= i / 2; j++) {
			if (maxprice[i] < arr[j] + maxprice[i - j]) {
				maxprice[i] = arr[j] + maxprice[i - j];
			}
		}
	}

	cout << maxprice[n] << endl;

	return 0;

}