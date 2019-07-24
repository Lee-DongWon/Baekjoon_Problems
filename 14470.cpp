#include <stdio.h>

int main() {
	int a, b, c, d, e, time;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &e);

	if (a > 0) {
		time = (b - a)*e;
	}
	else if (a == 0) {
		time = d + (b - a)*e;
	}
	else {
		time = (-a)*c + d + b * e;
	}

	printf("%d\n", time);

	return 0;
}