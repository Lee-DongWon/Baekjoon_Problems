#include <stdio.h>

int max(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

int main() {
	int a, b, c;
	int cnt;

	scanf("%d %d %d", &a, &b, &c);

	cnt = max(b - a, c - b) - 1;

	printf("%d", cnt);

	return 0;
}