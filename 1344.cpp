#include <iostream>
#include <cmath>

#define NUM 19

int isPrime(int n) {
	int i;
	if (n == 0 || n == 1) return 0;
	for (i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}

int main() {
	double A, B;
	int i, j, k;
	double dp[NUM][NUM][NUM] = { 0 };
	double result = 0;

	scanf("%lf", &A);
	scanf("%lf", &B);
	A /= 100; B /= 100;


	dp[1][0][0] = (1 - A) * (1 - B);
	dp[1][0][1] = (1 - A) * (B);
	dp[1][1][0] = (A) * (1 - B);
	dp[1][1][1] = (A) * (B);

	for (i = 2; i < NUM; i++) {
		for (j = 0; j <= i; j++) {
			for (k = 0; k <= i; k++) {
				dp[i][j][k] += dp[i - 1][j][k] * (1 - A) * (1 - B);
				if (j > 0)
					dp[i][j][k] += dp[i - 1][j - 1][k] * A * (1 - B);
				if (k > 0)
					dp[i][j][k] += dp[i - 1][j][k - 1] * (1 - A) * B;
				if (j > 0 && k > 0)
					dp[i][j][k] += dp[i - 1][j - 1][k - 1] * A * B;
			}
		}
	}

	for (i = 0; i < NUM; i++) {
		for (j = 0; j < NUM; j++) {
			if (isPrime(i) || isPrime(j)) {
				result += dp[18][i][j];
			}
		}
	}

	printf("%lf\n", result);

	return 0;
}
