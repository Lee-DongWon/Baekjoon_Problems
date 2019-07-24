#include <stdio.h>

int main() {
	int avg, sum = 0;
	int arr[5] = { 0 };
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 5; i++) {
		if (arr[i] < 40) {
			arr[i] = 40;
		}
		sum = sum + arr[i];
	}

	avg = sum / 5;
	printf("%d", avg);

	return 0;
}