#include <stdio.h>

int main() {
	int n, max = 0;
	int arr[1001] = { 0 };
	int length[1001] = { 0 };

	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 1; i <= n; i++) {
		int min = 0;
		for (int j = 1; j < i; j++) {
			if (arr[j] < arr[i] && min < length[j]) {
				min = length[j];
			}
		}

		length[i] = min + 1;

		if (max < length[i]) {
			max = length[i];
		}
	}

	printf("%d\n", max);

	return 0;
}