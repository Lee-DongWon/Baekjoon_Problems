#include <stdio.h>

int main() {
	int num, n, sum, cnt;
	double avg, per;
	int arr[1000] = { 0 };

	scanf("%d", &num);

	for (int j = 0; j < num; j++) {
		sum = 0, cnt = 0;
		for (int i = 0; i < 1000; i++) {
			arr[i] = 0;
		}
		scanf("%d", &n);

		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
			sum = sum + arr[i];
		}

		avg = (double)sum / n;
		for (int i = 0; i < n; i++) {
			if ((double)arr[i] > avg) {
				cnt++;
			}
		}

		per = cnt / (double)n*100.0;
		printf("%.3f%%\n", per);

	}

	return 0;
}