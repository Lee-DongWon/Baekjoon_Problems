#include <stdio.h>

int main() {
	int a1, a2, a3, b1, b2, b3, x, y;

	scanf("%d %d", &a1, &b1);
	scanf("%d %d", &a2, &b2);
	scanf("%d %d", &a3, &b3);

	if (a1 == a2) {
		x = a3;
	}
	else if (a1 == a3) {
		x = a2;
	}
	else {
		x = a1;
	}

	if (b1 == b2) {
		y = b3;
	}
	else if (b1 == b3) {
		y = b2;
	}
	else {
		y = b1;
	}

	printf("%d %d", x, y);

	return 0;
}