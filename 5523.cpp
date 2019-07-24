#include <iostream>

using namespace std;

int main() {
	int n;
	int awin = 0, bwin = 0;

	cin >> n;

	while (n--) {
		int a, b;
		cin >> a >> b;

		if (a > b) {
			awin++;
		}
		else if (b > a) {
			bwin++;
		}
	}

	cout << awin << " " << bwin << endl;

	return 0;
}