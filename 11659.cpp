#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, m;
	int *arr, *total;
	scanf("%d %d", &n, &m);


	arr = (int *)malloc(sizeof(int)*(n + 1));
	total = (int *)malloc(sizeof(int)*(n + 1));
	total[0] = 0;

	for (int i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
		total[i] = total[i - 1] + arr[i];
	}

	for (int i = 0; i < m; i++) {
		int a, b, sum = 0;
		scanf("%d %d", &a, &b);
		sum = total[b] - total[a - 1];
		printf("%d\n", sum);
	}

	return 0;

}