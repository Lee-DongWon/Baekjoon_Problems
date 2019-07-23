#include <stdio.h>
#include <math.h>

int getOrder(int N, int r, int c) {
	if (N == 1) {
		if (r == 0 && c == 0) {
			return 0;
		}
		else if (r == 0 && c == 1) {
			return 1;
		}
		else if (r == 1 && c == 0) {
			return 2;
		}
		else {
			return 3;
		}
	}
	else {
		if (r <= (int)pow(2.0, (double)N - 1) - 1 && c <= (int)pow(2.0, (double)N - 1) - 1) {
			return getOrder(N - 1, r, c);
		}
		else if (r <= (int)pow(2.0, (double)N - 1) - 1 && c > (int)pow(2.0, (double)N - 1) - 1) {
			return (int)(pow(2.0, (double)N - 1)*pow(2.0, (double)N - 1)) + getOrder(N - 1, r, c - (int)(pow(2.0, (double)N - 1)));
		}
		else if (r > (int)pow(2.0, (double)N - 1) - 1 && c <= (int)pow(2.0, (double)N - 1) - 1) {
			return 2 * (int)(pow(2.0, (double)N - 1)*pow(2.0, (double)N - 1)) + getOrder(N - 1, r - (int)(pow(2.0, (double)N - 1)), c);
		}
		else {
			return 3 * (int)(pow(2.0, (double)N - 1)*pow(2.0, (double)N - 1)) + getOrder(N - 1, r - (int)(pow(2.0, (double)N - 1)), c - (int)(pow(2.0, (double)N - 1)));
		}
	}
}


int main() {
	int N, r, c, result;

	scanf("%d %d %d", &N, &r, &c);

	result = getOrder(N, r, c);

	printf("%d", result);

	return 0;
}