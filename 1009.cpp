#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int a, b;
		int result;
		cin >> a >> b;

		a = a % 10;

		if (a == 0) {
			result = 10;
			cout << result << endl;
		}
		else {
			b = b % 4;
			if (b == 0) {
				b = 4;
			}
			result = (int)pow((double)a, (double)b) % 10;

			cout << result << endl;
		}
	}
	return 0;
}