#include <iostream>

using namespace std;

int main() {
	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {
		int n, cnt = 0;
		int arr[20] = { 0 };

		cin >> n;

		while (n / 2 > 0) {
			if (n % 2 == 1) {
				arr[cnt]++;
				n = n - 1;
			}
			else {
				cnt++;
				n = n / 2;
			}
		}

		arr[cnt]++;

		for (int j = 0; j < 20; j++) {
			if (arr[j] == 1) {
				cout << j << " ";
			}
		}
	}
	return 0;
}