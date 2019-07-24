#include <stdio.h>
#include <stdlib.h>

int main() {

	int n;

	scanf("%d", &n);

	int *arr = (int *)malloc(sizeof(int)*n);

	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;

	for (int i = 3; i <= n; i++) {
		arr[i] = (arr[i - 1] + arr[i - 2]) % 15746;
	}

	printf("%d", arr[n]);

	return 0;
}