#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, cnt = 0;

	scanf("%d", &n);

	int *arr = (int *)malloc(sizeof(int)*n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] != (i + 1)) {
			cnt++;
		}
	}

	printf("%d\n", cnt);

	return 0;
}