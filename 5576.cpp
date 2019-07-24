#include <stdio.h>

int main() {
	int score1[10] = { 0 }, score2[10] = { 0 };
	int sum1 = 0, sum2 = 0, temp;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &score1[i]);
	}

	for (int i = 0; i < 10; i++) {
		scanf("%d", &score2[i]);
	}

	for (int i = 0; i < 10; i++) {
		for (int j = i; j < 10; j++) {
			if (score1[i] > score1[j]) {
				temp = score1[i];
				score1[i] = score1[j];
				score1[j] = temp;
			}
			if (score2[i] > score2[j]) {
				temp = score2[i];
				score2[i] = score2[j];
				score2[j] = temp;
			}
		}
	}

	sum1 = sum1 + score1[7] + score1[8] + score1[9];
	sum2 = sum2 + score2[7] + score2[8] + score2[9];


	printf("%d %d\n", sum1, sum2);

	return 0;
}