#include <iostream>

using namespace std;

int main() {
	int t;

	cin >> t;

	while (t--) {
		int arr[10] = { 0 };
		int n, cnt = 0;

		cin >> n;

		while (n / 10 > 0) {
			arr[n % 10]++;
			n /= 10;
		}

		arr[n]++;

		for (int i = 0; i < 10; i++) {
			if (arr[i] != 0) {
				cnt++;
			}
		}

		cout << cnt << endl;
	}
}