#include <stdio.h>

int main() {
	int arr[10] = { 0 };
	int cnt = 1, temp;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		arr[i] %= 42;
	}

	for (int i = 0; i < 10; i++) {
		for (int j = i; j < 10; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 1; i < 10; i++) {
		if (arr[i] != arr[i - 1]) {
			cnt++;
		}
	}

	printf("%d", cnt);

	return 0;
}