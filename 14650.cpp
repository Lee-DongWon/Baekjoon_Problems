#include <stdio.h>
#include <math.h>

int n, cnt;

void gogo(int len, int num) {
	if (len == n) {
		if (num % 3 == 0 && num != 0) cnt++;
		return;
	}
	for (int i = 0; i < 3; i++) {
		if (i == 0 && len + 1 == n) continue;
		gogo(len + 1, num + i * pow(10, len));
	}
}

int main() {
	scanf("%d", &n);
	gogo(0, 0);
	printf("%d", cnt);
	return 0;
}