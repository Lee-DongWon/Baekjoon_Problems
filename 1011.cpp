#include <iostream>
#include <cmath>

using namespace std;

int main() {
	long long dist, w, dist2, x;

	int n, a, b;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a >> b;

		dist = b - a;

		x = 1;

		for (w = 1; w*w <= dist; w++) {
			x++;
		}

		x--;

		dist2 = dist - x * x;

		dist2 = (long long)ceil((double)dist2 / x);

		cout << 2 * x - 1 + dist2 << endl;
	}

	return 0;
}