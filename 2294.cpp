#include <iostream>

using namespace std;

int getMin(int a, int b) {
	if (a < b) {
		return a;
	}
	else {
		return b;
	}
}

int main() {
	int n, k;

	cin >> n >> k;

	int *coin = new int[n];
	int *min = new int[k + 1];

	for (int i = 0; i < n; i++) {
		cin >> coin[i];
	}

	for (int i = 0; i < k + 1; i++) {
		min[i] = 10001;
	}
	min[0] = 0;

	for (int i = 0; i < n; i++) {
		for (int j = coin[i]; j < k + 1; j++) {
			min[j] = getMin(min[j], min[j - coin[i]] + 1);
		}
	}

	if (min[k] != 10001) {
		cout << min[k] << endl;
	}
	else {
		cout << "-1" << endl;
	}

	return 0;
}