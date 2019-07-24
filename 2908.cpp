#include <stdio.h>

int main() {
	int a, b;
	int rev_a, rev_b;

	scanf("%d %d", &a, &b);

	rev_a = 100 * (a % 10) + 10 * ((a % 100) / 10) + a / 100;
	rev_b = 100 * (b % 10) + 10 * ((b % 100) / 10) + b / 100;

	if (a % 10 > b % 10) {
		printf("%d", rev_a);
	}
	else if (a % 10 < b % 10) {
		printf("%d", rev_b);
	}
	else {
		if ((a % 100) / 10 > (b % 100) / 10) {
			printf("%d", rev_a);
		}
		else if ((a % 100) / 10 < (b % 100) / 10) {
			printf("%d", rev_b);
		}
		else {
			if (a / 100 > b / 100) {
				printf("%d", rev_a);
			}
			else {
				printf("%d", rev_b);
			}
		}
	}

	return 0;
}