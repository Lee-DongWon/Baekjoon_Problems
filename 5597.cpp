#include <stdio.h>

int main() {
	int arr[30] = { 0 };
	int homework[31] = { 0 };

	for (int i = 0; i < 28; i++) {
		scanf("%d", &arr[i]);
		homework[arr[i]] = 1;
	}

	for (int i = 1; i <= 30; i++) {
		if (homework[i] != 1) {
			printf("%d\n", i);
		}
	}

	return 0;
}