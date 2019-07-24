#include <stdio.h>

int main() {
	int n, m, k;
	int arr[15][15] = { 0 };

	for (int i = 1; i < 15; i++) {
		arr[0][i] = i;
	}

	for (int i = 1; i < 15; i++) {
		for (int j = 1; j < 15; j++) {
			arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
		}
	}
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &m, &k);

		printf("%d\n", arr[m][k]);
	}
	return 0;
}