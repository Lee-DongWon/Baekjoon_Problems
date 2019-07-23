#include <stdio.h>
int gcd(int a, int b) { return b ? gcd(b, a%b) : a; }
int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	printf("%d", m - gcd(n, m));
	return 0;
}