#include <cstdio>
using namespace std;

long long int A, B, C;


long long int power(long long int n, long long int k) {

	if (k == 0) return 1;

	long long int temp = power(n, k / 2);
	long long int result = temp * temp % C;

	if (k % 2) result = result * n % C;
	return result;
}

int main() {
	scanf("%lld %lld %lld", &A, &B, &C);
	printf("%lld\n", power(A, B));

	return 0;
}