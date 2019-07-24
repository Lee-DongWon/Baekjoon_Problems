#include <stdio.h>

int main() {
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);

	if (a <= 1) {
		printf("Before\n");
	}
	else if (a >= 3) {
		printf("After\n");
	}
	else {
		if (b <= 17) {
			printf("Before\n");
		}
		else if (b >= 19) {
			printf("After\n");
		}
		else {
			printf("Special\n");
		}
	}
}