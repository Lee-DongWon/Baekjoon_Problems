#include <iostream>

using namespace std;

int main() {
	int n, price1 = 0, price2 = 0;

	cin >> n;

	int *time = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> time[i];

		price1 += (time[i] / 30 + 1) * 10;

		price2 += (time[i] / 60 + 1) * 15;

	}

	if (price1 > price2) {
		cout << "M " << price2 << endl;
	}
	else if (price1 < price2) {
		cout << "Y " << price1 << endl;
	}
	else {
		cout << "Y M " << price1 << endl;
	}

	return 0;
}