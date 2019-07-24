#include <stdio.h>

int main() {
	int l, a, b, c, d;
	int free, work;

	scanf("%d", &l);
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);

	if (a / c > b / d) {
		if (a%c == 0) {
			work = a / c;
		}
		else {
			work = a / c + 1;
		}
	}
	else {
		if (b%d == 0) {
			work = b / d;
		}
		else {
			work = b / d + 1;
		}
	}

	free = l - work;

	printf("%d\n", free);

	return 0;
}