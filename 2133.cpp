#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;
	int *arr = new int[n + 1];

	for (int i = 0; i < n + 1; i++) {
		if (i == 2) {
			arr[i] = 3;
		}
		else {
			arr[i] = 0;
		}
	}

	for (int i = 3; i <= n; i++) {
		if (i % 2 == 1) {
			arr[i] = 0;
		}
		else {
			for (int j = 2; j < i; j = j + 2) {
				if (j == 2) {
					arr[i] += 3 * arr[i - 2];
				}
				else {
					arr[i] += 2 * arr[i - j];
				}
			}
			if (i > 2) {
				arr[i] += 2;
			}
		}
	}

	cout << arr[n] << endl;
}