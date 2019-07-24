#include <iostream>

using namespace std;

int main() {

	int n; cin >> n;

	int level = 0;

	while (n) {

		if (n < 9) {
			break;
		}

		int cand = n;
		int sum = 1;
		while (cand) {
			int cand2 = cand % 10;
			sum *= cand2;
			cand /= 10;
		}
		level++;
		n = sum;
	}

	cout << level << endl;

	return 0;
}
