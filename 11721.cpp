#include <stdio.h>
#include <string.h>

int main() {
	char string[100];
	int length = 0;
	scanf("%s", string);
	length = strlen(string);

	for (int i = 0; i < length; i++) {
		printf("%c", string[i]);
		if ((i + 1) % 10 == 0) {
			printf("\n");
		}
	}

	return 0;
}