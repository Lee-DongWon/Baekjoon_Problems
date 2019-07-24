#include <stdio.h>

int main() {
	int a[300][300] = { 0 }, b[300][300] = { 0 };
	int n, cnt = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &b[i][j]);
		}
	}

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			bool chk = false;
			for (int m = 0; m < n; m++) {
				chk |= a[i][m] && b[m][j];
				if (chk) {
					cnt++;
					break;
				}
			}
		}

	printf("%d\n", cnt);

	return 0;
}