#include <stdio.h>
#include <math.h>

int main() {
	int n, w, h;

	scanf("%d %d %d", &n, &w, &h);

	while (n--) {
		int a;

		scanf("%d", &a);

		if (pow((double)a, 2.0) <= pow((double)w, 2.0) + pow((double)h, 2.0)) {
			printf("DA\n");
		}
		else {
			printf("NE\n");
		}
	}
	return 0;
}