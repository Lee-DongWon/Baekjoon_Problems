#include <stdio.h>
#include <math.h>

int main() {
	int n;
	int dp[100001] = { 0 };

	scanf("%d", &n);

	dp[1] = 1;

	for (int i = 2; i <= n; i++) {
		int min = 100000;
		for (int j = 1; j <= (int)sqrt((double)i); j++) {
			if (min > (1 + dp[i - (int)pow((double)j, 2.0)])) {
				min = 1 + dp[i - (int)pow((double)j, 2.0)];
			}
		}
		dp[i] = min;
	}

	printf("%d\n", dp[n]);

	return 0;
}