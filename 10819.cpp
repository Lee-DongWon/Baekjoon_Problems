#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main() {
	int n, max = 0, max1 = 0, max2 = 0;
	int *arr, *result1, *result2;

	scanf("%d", &n);

	arr = (int *)malloc(sizeof(int)*n);
	result1 = (int *)malloc(sizeof(int)*n);
	result2 = (int *)malloc(sizeof(int)*n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	sort(arr, arr + n);

	if (n % 2 == 1) {
		for (int i = 0; i < (n + 1) / 2; i++) {
			max1 -= 2 * arr[i];
		}
		for (int i = (n + 1) / 2; i < n; i++) {
			max1 += 2 * arr[i];
		}
		max1 += arr[n / 2] + arr[n / 2 - 1];

		for (int i = 0; i < n / 2; i++) {
			max2 -= 2 * arr[i];
		}
		for (int i = n / 2; i < n; i++) {
			max2 += 2 * arr[i];
		}
		max2 -= arr[n / 2] + arr[n / 2 + 1];

		if (max1 > max2) {
			max = max1;
		}
		else {
			max = max2;
		}
	}
	else {
		for (int i = 0; i < n / 2; i++) {
			max -= 2 * arr[i];
		}
		for (int i = n / 2; i < n; i++) {
			max += 2 * arr[i];
		}
		max = max - arr[n / 2] + arr[n / 2 - 1];
	}

	printf("%d\n", max);

	return 0;
}