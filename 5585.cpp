#include <stdio.h>

int main() {
	int price, left, cnt = 0;

	scanf("%d", &price);

	left = 1000 - price;

	cnt += left / 500;
	left = left % 500;

	cnt += left / 100;
	left = left % 100;

	cnt += left / 50;
	left = left % 50;

	cnt += left / 10;
	left = left % 10;

	cnt += left / 5;
	left = left % 5;

	cnt += left;

	printf("%d", cnt);

	return 0;
}