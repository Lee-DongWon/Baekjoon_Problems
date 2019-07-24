#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int reverse(int n) {
	int a = n, result = 0;
	int length = 0, cnt = 0;

	while (a > 0) {
		length++;
		a /= 10;
	}

	while (n > 0) {
		result += (int)pow(10.0, cnt) * (int)(n / pow(10.0, length - 1));
		n %= (int)pow(10.0, length - 1);
		length--;
		cnt++;
	}

	return result;
}

int main() {
	int n, k, max = 0;
	int *arr;

	scanf("%d %d", &n, &k);

	arr = (int *)malloc(sizeof(int)*k);

	for (int i = 0; i < k; i++) {
		arr[i] = n * (i + 1);
		if (max < reverse(arr[i])) {
			max = reverse(arr[i]);
		}
	}

	printf("%d\n", max);

	return 0;
}