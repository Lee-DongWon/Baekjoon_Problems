#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int t;

	cin >> t;

	while (t--) {
		int n;
		char type;

		cin >> n >> type;

		if (type == 'C') {
			for (int i = 0; i < n; i++) {
				char q;
				cin >> q;
				printf("%d ", q - 64);
			}
			cout << endl;
		}
		else {
			for (int i = 0; i < n; i++) {
				int k;
				cin >> k;
				printf("%c ", k + 64);
			}
			cout << endl;
		}
	}

	return 0;
}