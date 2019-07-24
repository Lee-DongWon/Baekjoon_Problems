#include <stdio.h>

int main() {
	int right[6] = { 1,1,2,2,2,8 };
	int wrong[6] = { 0 };
	int fix[6] = { 0 };

	for (int i = 0; i < 6; i++) {
		scanf("%d", &wrong[i]);
		fix[i] = right[i] - wrong[i];
	}

	for (int i = 0; i < 6; i++) {
		printf("%d ", fix[i]);
	}

	return 0;
}