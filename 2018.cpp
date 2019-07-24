#include <iostream>

using namespace std;

int main() {
	int n, cnt = 0;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		if (2 * n%i == 0) {
			if ((2 * n / i + 1 - i) % 2 == 0 && (2 * n / i + 1 - i) / 2 > 0) {
				cnt++;
			}
		}
	}

	cout << cnt << endl;

	return 0;
}