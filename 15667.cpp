#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;

	int sol = 0;
	int sum = 0;
	while (sum != n) {
		sol++;
		sum = sol + 1 + sol * sol;
	}

	cout << sol << endl;

	return 0;
}


