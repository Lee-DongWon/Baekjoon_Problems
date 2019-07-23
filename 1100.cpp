#include <stdio.h>
#include <string.h>

int main() {
	char arr[8][8];
	int cnt = 0;

	for (int i = 0; i < 8; i++) {
		scanf("%s", &arr[i]);
	}

	for (int i = 0; i < 8; i += 2) {
		for (int j = 0; j < 8; j += 2) {
			if (arr[i][j] == 'F') {
				cnt++;
			}
		}
	}

	for (int i = 1; i < 8; i += 2) {
		for (int j = 1; j < 8; j += 2) {
			if (arr[i][j] == 'F') {
				cnt++;
			}
		}
	}

	printf("%d", cnt);

	return 0;
}