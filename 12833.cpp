#include <stdio.h>

int main() {
	int b, c, i, res;

	scanf("%d %d %d", &res, &b, &c);

	for (i = 0; i < c; i++)
		res ^= b;

	printf("%d", res);

	return 0;
}