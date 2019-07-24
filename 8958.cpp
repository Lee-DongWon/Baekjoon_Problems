#include <stdio.h>
#include <string.h>

int main() {
	int n;
	char arr[80];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int point = 1, sum = 0;
		scanf("%s", &arr);
		for (int j = 0; j < strlen(arr); j++) {
			if (arr[j] == 'O') {
				sum = sum + point;
				point++;
			}
			if (arr[j] == 'X') {
				point = 1;
			}
		}
		printf("%d\n", sum);
	}

	return 0;
}