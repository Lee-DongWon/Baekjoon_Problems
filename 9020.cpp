#include <iostream>

using namespace std;

#define maxn 10000

int main() {
	int t;
	int notprime[maxn + 1] = { 1,1,0 };

	for (int i = 2; i <= maxn; i++) {
		if (notprime[i]) {
			continue;
		}
		for (int j = 2 * i; j <= maxn; j += i) {
			notprime[j] = 1;
		}
	}


	cin >> t;


	for (int i = 0; i < t; i++) {
		int n, m;
		int a, b;
		cin >> n;
		m = n / 2;
		for (int j = m; j <= n; j++) {
			if (!notprime[j] && !notprime[n - j]) {
				a = j;
				b = n - j;
				break;
			}
		}
		cout << b << " " << a << endl;
	}

	return 0;
}
