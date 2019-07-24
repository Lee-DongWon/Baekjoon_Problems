#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		float r, e, c;
		float sum;

		cin >> r >> e >> c;

		sum = r + c;

		if (sum > e) {
			cout << "do not advertise" << endl;
		}
		else if (sum == e) {
			cout << "does not matter" << endl;
		}
		else {
			cout << "advertise" << endl;
		}
	}

	return 0;
}