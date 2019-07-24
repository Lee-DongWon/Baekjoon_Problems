#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, m, num = 0, j, sum = 0;
	int *arr;

	scanf("%d %d", &n, &m);

	arr = (int *)malloc(sizeof(int)*n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++) {
		sum = 0;
		j = i;

		while (sum < m) {
			sum += arr[j];
			j++;
			if (j >= n)
				break;
		}

		if (sum == m) {
			num++;
		}
	}



	printf("%d\n", num);

	return 0;
}