#include <iostream>

using namespace std;

int min(int a, int b) {
	if (a < b) {
		return a;
	}
	else {
		return b;
	}
}

int main() {
	int a, b, c, d;

	cin >> a >> b;
	cin >> c >> d;

	if (min(min(c*d, b*d), min(a*b, a*c)) == c * d) {
		cout << "0" << endl;
	}
	else if (min(min(c*d, b*d), min(a*b, a*c)) == b * d) {
		cout << "1" << endl;
	}
	else if (min(min(c*d, b*d), min(a*b, a*c)) == b * a) {
		cout << "2" << endl;
	}
	else {
		cout << "3" << endl;
	}

	return 0;
}