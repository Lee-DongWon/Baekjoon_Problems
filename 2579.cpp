#include <stdio.h>

int Max(int a, int b) {
	if (a >= b) {
		return a;
	}
	else {
		return b;
	}
}

int main() {
	int n;
	int arr[300] = { 0 };
	int max[300] = { 0 };

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	max[0] = arr[0];

	if (n >= 1) {
		max[1] = arr[0] + arr[1];
		if (n >= 2) {
			max[2] = Max(arr[0] + arr[2], arr[1] + arr[2]);

			if (n >= 3) {
				for (int i = 3; i < n; i++) {
					max[i] = Max(max[i - 3] + arr[i - 1] + arr[i], max[i - 2] + arr[i]);
				}
			}
		}
	}

	printf("%d", max[n - 1]);

	return 0;
}