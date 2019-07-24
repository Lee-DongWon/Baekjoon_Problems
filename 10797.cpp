#include <stdio.h>

int main() {
	int n, cnt = 0;
	int arr[5] = { 0 };

	scanf("%d", &n);

	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
		arr[i] = arr[i] % 10;
	}

	for (int i = 0; i < 5; i++) {
		if (arr[i] == n) {
			cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}