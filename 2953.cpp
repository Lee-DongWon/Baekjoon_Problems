#include <stdio.h>

int main() {
	int arr[6][4] = { 0 };
	int max = 1, sum = 0;
	int r[6] = { 0 };

	for (int i = 1; i <= 5; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 1; i <= 5; i++) {
		r[i] = arr[i][0] + arr[i][1] + arr[i][2] + arr[i][3];
	}

	for (int i = 1; i < 6; i++) {
		if (sum < r[i]) {
			max = i;
			sum = r[i];
		}
	}

	printf("%d %d", max, sum);

	return 0;
}