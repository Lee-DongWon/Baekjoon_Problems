#include <stdio.h>

int getmax(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

char toChar(int a, int t, int g, int c, int max) {
	if (max == a) {
		return 'A';
	}
	else if (max == c) {
		return 'C';
	}
	else if (max == g) {
		return 'G';
	}
	else if (max == t) {
		return 'T';
	}
}

int main() {
	int i, j, n, m, max = 0, hd = 0;
	char dna[1001][51];

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		scanf("%s", &dna[i]);
	}

	for (int i = 0; i < m; i++) {
		int a = 0, c = 0, g = 0, t = 0;
		for (int j = 0; j < n; j++) {
			switch (dna[j][i]) {
			case 'A': a++; break;
			case 'C': c++; break;
			case 'G': g++; break;
			case 'T': t++; break;
			}
		}

		max = getmax(getmax(a, c), getmax(g, t));
		hd += n - max;
		printf("%c", toChar(a, t, g, c, max));
	}
	printf("\n");
	printf("%d\n", hd);

	return 0;
}