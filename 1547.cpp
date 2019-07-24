#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, x, y, arr[4] = { 0,1,0,0 };

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		std::swap(arr[x], arr[y]);
	}
	for (int i = 1; i <= 3; i++) {
		if (arr[i]) {
			cout << i << endl;
		}
	}

	return 0;
}