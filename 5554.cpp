#include <stdio.h>

int main() {
	int t1, t2, t3, t4;
	int total = 0, min, sec;

	scanf("%d", &t1);
	scanf("%d", &t2);
	scanf("%d", &t3);
	scanf("%d", &t4);

	total = t1 + t2 + t3 + t4;

	min = total / 60;
	sec = total % 60;

	printf("%d\n%d\n", min, sec);

	return 0;
}