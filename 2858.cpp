#include <iostream>

using namespace std;

int main() {
	int red, brown;
	int sum, mul;

	cin >> red >> brown;

	sum = (red + 4) / 2;
	mul = brown - 4 + 2 * sum;

	for (int i = 1; i < sum; i++) {
		if (i*(sum - i) == mul) {
			cout << sum - i << " " << i << endl;
			return 0;
		}
	}
}