#include <stdio.h>

int main() {
	int passenger = 0, max = 0;
	int arr[10][2] = { 0 };

	for (int i = 0; i < 10; i++) {
		scanf("%d %d", &arr[i][0], &arr[i][1]);

		passenger = passenger - arr[i][0] + arr[i][1];
		if (max < passenger) {
			max = passenger;
		}
	}

	printf("%d", max);

	return 0;
}