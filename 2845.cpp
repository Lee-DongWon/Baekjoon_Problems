#include <stdio.h>

int main() {
	int l, p, num;
	int arr[5] = { 0 };

	scanf("%d %d", &l, &p);

	num = p * l;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
		arr[i] -= num;
	}

	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}