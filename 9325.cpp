#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int s, total = 0;
		int option;

		cin >> s;
		total += s;

		cin >> option;

		for (int j = 0; j < option; j++) {
			int p, q;
			cin >> p >> q;
			total += p * q;
		}

		cout << total << endl;

	}

	return 0;
}