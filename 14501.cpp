#include <iostream>

using namespace std;

int getMax(int a, int b) {
	if (a < b) {
		return b;
	}
	else {
		return a;
	}
}

int main() {
	int n;

	cin >> n;

	int *arrT = new int[n];
	int *arrP = new int[n];
	int *max = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arrT[i] >> arrP[i];

		if (i + arrT[i] <= n) {
			max[i] = arrP[i];
		}
	}

	for (int i = 1; i < n; i++) {
		if (i + arrT[i] <= n) {
			for (int j = 0; j < i; j++) {
				if (i - j >= arrT[j]) {
					max[i] = getMax(max[i], max[j] + arrP[i]);
				}
			}
		}
	}

	int result = 0;
	for (int i = 0; i < n; i++) {
		if (result < max[i]) {
			result = max[i];
		}
	}

	cout << result << endl;

	return 0;
}