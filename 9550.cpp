#include <iostream>

using namespace std;

int main() {
	int t;

	cin >> t;

	while (t--) {
		int n, k, sum = 0;
		int candy[100];

		cin >> n >> k;

		for (int i = 0; i < n; i++) {
			cin >> candy[i];
			sum += candy[i] / k;
		}

		cout << sum << endl;
	}
}