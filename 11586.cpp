#include <stdio.h>

int main() {
	int n, a;
	char arr[100][100];

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s", &arr[i]);
	}

	scanf("%d", &a);

	if (a == 1) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				printf("%c", arr[i][j]);
			}
			printf("\n");
		}
	}
	else if (a == 2) {
		for (int i = 0; i < n; i++) {
			for (int j = n - 1; j >= 0; j--) {
				printf("%c", arr[i][j]);
			}
			printf("\n");
		}
	}
	else if (a == 3) {
		for (int i = n - 1; i >= 0; i--) {
			for (int j = 0; j < n; j++) {
				printf("%c", arr[i][j]);
			}
			printf("\n");
		}
	}

	return 0;
}