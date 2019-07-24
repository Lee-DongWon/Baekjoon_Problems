#include <stdio.h>

int main() {
	int t;

	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int sum1, sum2;
		int g1, g2, g3, g4, g5, g6;
		int s1, s2, s3, s4, s5, s6, s7;

		scanf("%d %d %d %d %d %d", &g1, &g2, &g3, &g4, &g5, &g6);
		scanf("%d %d %d %d %d %d %d", &s1, &s2, &s3, &s4, &s5, &s6, &s7);

		sum1 = g1 + 2 * g2 + 3 * g3 + 3 * g4 + 4 * g5 + 10 * g6;
		sum2 = s1 + 2 * s2 + 2 * s3 + 2 * s4 + 3 * s5 + 5 * s6 + 10 * s7;

		printf("Battle %d: ", i + 1);
		if (sum1 < sum2) {
			printf("Evil eradicates all trace of Good\n");
		}
		else if (sum1 > sum2) {
			printf("Good triumphs over Evil\n");
		}
		else {
			printf("No victor on this battle field\n");
		}
	}


	return 0;
}