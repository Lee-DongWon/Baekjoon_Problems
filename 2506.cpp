#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, score = 0, cnt = 0;

	scanf("%d", &n);

	int *arr = (int *)malloc(sizeof(int)*n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] == 1) {
			cnt++;
			score += cnt;
		}
		else {
			cnt = 0;
		}
	}

	printf("%d", score);

	return 0;
}