#include <iostream>
using namespace std;

int main() {
	int N, M, total = 0;
	cin >> N;
	M = N % 5;
	if (N >= 8) {
		if (M % 3 == 0) {
			total = N / 5 + M / 3;
			cout << total << endl;
		}
		else if ((M + 5) % 3 == 0) {
			total = ((N / 5) - 1) + (M + 5) / 3;
			cout << total << endl;
		}
		else if ((M + 10) % 3 == 0) {
			total = ((N / 5) - 2) + (M + 10) / 3;
			cout << total << endl;
		}
		else {
			cout << "-1" << endl;
		}
	}
	else {
		if (N % 3 == 0) {
			cout << N / 3 << endl;
		}
		else if (N % 5 == 0) {
			cout << N / 5 << endl;
		}
		else {
			cout << "-1" << endl;
		}
	}

	return 0;
}