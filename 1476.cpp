#include <stdio.h>

int main() {
	int s, e, m;
	int year;
	int a;

	scanf("%d %d %d", &s, &e, &m);

	if (s == 15) {
		s = 0;
	}

	if (e == 28) {
		e = 0;
	}

	if (m == 19) {
		m = 0;
	}

	for (int i = 0; i < 28; i++) {
		if ((15 * i + s) % 28 == e) {
			a = 15 * i + s;
			break;
		}
	}

	for (int i = 0; i < 19; i++) {
		if ((15 * 28 * i + a) % 19 == m) {
			year = 15 * 28 * i + a;
			break;
		}
	}

	if (year == 0) {
		year = 15 * 28 * 19;
	}

	printf("%d\n", year);

	return 0;
}