#include <stdio.h>

int main() {
	while (1) {
		int x, y, a, b, c;

		scanf("%d %d", &x, &y);

		if (x == 0 && y == 0) {
			break;
		}
		else {
			a = x / y;
			b = x % y;
			c = y;

			printf("%d %d / %d\n", a, b, c);
		}
	}

	return 0;
}