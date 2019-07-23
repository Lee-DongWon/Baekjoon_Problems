#include <stdio.h>

int Min(int a, int b) {
	if (a < b) {
		return a;
	}
	else {
		return b;
	}
}

int main() {
	int x, y, w, h;
	int min1, min2, min;

	scanf("%d %d %d %d", &x, &y, &w, &h);

	min1 = Min(x, w - x);
	min2 = Min(y, h - y);
	min = Min(min1, min2);

	printf("%d\n", min);

	return 0;
}