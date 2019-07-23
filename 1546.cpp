#include <stdio.h>

int main() {
	int n, max = 0;
	double result = 0;
	double score[1000] = { 0 };

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%lf", &score[i]);
		if (max < score[i]) {
			max = score[i];
		}
	}

	for (int i = 0; i < n; i++) {
		score[i] = score[i] / max * 100;
		result = result + score[i];
	}

	printf("%.2lf", result / n);

	return 0;
}