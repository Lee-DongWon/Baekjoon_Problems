#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	int seat[101] = { 0 };
	int cnt = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int a;
		scanf("%d", &a);
		if (seat[a] != 0) {
			cnt++;
		}
		else {
			seat[a]++;
		}
	}

	printf("%d\n", cnt);

	return 0;
}