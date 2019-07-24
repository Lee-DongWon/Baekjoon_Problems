#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	while (n--) {
		int test, num = 1;

		cin >> test;

		for (int i = 1; i < test; i++) {
			num = 2 * num + 1;
		}

		cout << num << endl;
	}

	return 0;
}

