#include <stdio.h>

int main() {
	int cardA[10], cardB[10];
	int a = 0, b = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &cardA[i]);
	}
	for (int i = 0; i < 10; i++) {
		scanf("%d", &cardB[i]);
	}
	for (int i = 0; i < 10; i++) {
		if (cardA[i] > cardB[i]) {
			a++;
		}
		else if (cardA[i] < cardB[i]) {
			b++;
		}
	}

	if (a == b) {
		printf("D\n");
	}
	else if (a > b) {
		printf("A\n");
	}
	else {
		printf("B\n");
	}


	return 0;
}