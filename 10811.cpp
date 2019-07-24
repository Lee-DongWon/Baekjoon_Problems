#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, m;

	scanf("%d %d", &n, &m);

	int *arr = (int *)malloc(sizeof(int)*(n + 1));

	for (int i = 0; i <= n; i++) {
		arr[i] = i;
	}

	while (m--) {
		int a, b, temp;

		scanf("%d %d", &a, &b);

		for (int i = a; i < a + (b - a + 1) / 2; i++) {
			temp = arr[i];
			arr[i] = arr[b - i + a];
			arr[b - i + a] = temp;
		}
	}

	for (int i = 1; i <= n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}