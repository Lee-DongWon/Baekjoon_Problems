#include <iostream>
#include <cmath>

using namespace std;

int inOut(int x, int y, int a, int b, int r) {
	int dist = (x - a)*(x - a) + (y - b)*(y - b);
	if (dist < r*r) {
		return -1;
	}
	else if (dist == r * r) {
		return 0;
	}
	else {
		return 1;
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		int n;
		int num = 0;
		cin >> n;
		for (int i = 0; i < n; i++) {
			int a, b, r;
			cin >> a >> b >> r;
			if (inOut(x1, y1, a, b, r) * inOut(x2, y2, a, b, r) == -1) {
				num++;
			}
		}
		cout << num << endl;
	}
	return 0;
}
