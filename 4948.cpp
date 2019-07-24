#include <stdio.h>

#define maxn 246912
int t;

bool notprime[maxn + 1] = { true,true,false };

int psum[maxn + 1];

int main() {
	for (int i = 2; i <= maxn; i++) {
		if (notprime[i]) {
			continue;
		}
		for (int j = 2 * i; j <= maxn; j += i) {
			notprime[j] = true;
		}
	}

	for (int i = 2; i <= maxn; i++) {
		psum[i] = psum[i - 1];
		if (!notprime[i]) {
			psum[i]++;
		}
	}

	while (1) {
		scanf("%d", &t);
		if (t == 0) {
			break;
		}

		printf("%d\n", psum[t * 2] - psum[t]);
	}

	return 0;
}
