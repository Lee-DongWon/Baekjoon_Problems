#include <stdio.h>

int main() {
	int n;
	int array[100] = { 0 };
	int cnt = 0, tmp = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}

	for (int i = 0; i < n; i++) {

		if (array[i] > 1) {
			tmp = 0;
			for (int j = 2; j < array[i]; j++) {
				if (array[i] % j == 0) {
					tmp++;
				}
			}
			if (tmp == 0) {
				cnt++;
			}
		}
	}

	printf("%d", cnt);

	return 0;
}