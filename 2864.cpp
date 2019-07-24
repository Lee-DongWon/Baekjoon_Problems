#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char s1[7], s2[7];
	int min1, min2, min;
	int max1, max2, max;

	scanf("%s %s", s1, s2);

	for (int i = 0; i < strlen(s1); i++) {
		if (s1[i] == '6') {
			s1[i] = '5';
		}
	}

	min1 = atoi(s1);

	for (int i = 0; i < strlen(s2); i++) {
		if (s2[i] == '6') {
			s2[i] = '5';
		}
	}

	min2 = atoi(s2);


	min = min1 + min2;



	for (int i = 0; i < strlen(s1); i++) {
		if (s1[i] == '5') {
			s1[i] = '6';
		}
	}

	max1 = atoi(s1);

	for (int i = 0; i < strlen(s2); i++) {
		if (s2[i] == '5') {
			s2[i] = '6';
		}
	}

	max2 = atoi(s2);

	max = max1 + max2;


	printf("%d %d", min, max);

	return 0;

}