#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, max = -1000000, min = 1000000;

	scanf("%d", &n);

	int *arr = (int *)malloc(sizeof(int)*n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (max < arr[i]) {
			max = arr[i];
		}

		if (min > arr[i]) {
			min = arr[i];
		}
	}

	printf("%d %d", min, max);

	return 0;
}