#include <stdio.h>

int main() {
	int n, max = 0, temp;
	int arr[10] = { 0 };

	scanf("%d", &n);

	while (n / 10 != 0) {
		arr[n % 10]++;
		n = n / 10;
	}

	arr[n]++;

	if ((arr[6] + arr[9]) % 2 == 1) {
		temp = arr[6] + arr[9];
		arr[6] = temp / 2 + 1;
		arr[9] = temp / 2 + 1;
	}
	else {
		temp = arr[6] + arr[9];
		arr[6] = temp / 2;
		arr[9] = temp / 2;
	}

	for (int i = 0; i <= 9; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	printf("%d", max);

	return 0;
}