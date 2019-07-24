#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		long long cnt5 = 0;

		for (int i = 5; i <= n; i *= 5) {
			cnt5 += n / i;
		}

		printf("%lld\n", cnt5);
	}
	return 0;
}