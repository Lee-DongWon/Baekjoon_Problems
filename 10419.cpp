#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	while (n--) {
		int time, k = 0;

		cin >> time;

		while (k*k + k <= time) {
			k++;
		}
		k--;

		printf("%d\n", k);
	}

	return 0;
}