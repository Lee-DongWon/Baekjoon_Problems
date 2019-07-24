#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, sum = 1;

	scanf("%d", &n);

	int *arr = (int *)malloc(sizeof(int)*n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}

	sum = sum - n;

	printf("%d\n", sum);

	return 0;
}