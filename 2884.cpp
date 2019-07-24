#include <stdio.h>

int main() {
	int hour, min;

	scanf("%d %d", &hour, &min);

	if (min >= 45) {
		printf("%d %d\n", hour, min - 45);
	}
	else {
		if (hour >= 1) {
			printf("%d %d\n", hour - 1, min + 15);
		}
		else {
			printf("23 %d\n", min + 15);
		}
	}

	return 0;
}