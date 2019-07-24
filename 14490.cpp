#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int gcd(int a, int b) {
	int temp;
	if (a < b) {
		temp = a;
		a = b;
		b = temp;
	}

	if (a%b == 0) {
		return b;
	}
	else {
		return gcd(b, a%b);
	}
}

int main() {
	int len, pos, a, b;
	string str;
	cin >> str;

	len = str.length();
	pos = str.find(':');
	a = stoi(str.substr(0, pos));
	b = stoi(str.substr(pos + 1, len - pos));

	cout << a / gcd(a, b) << ":" << b / gcd(a, b) << endl;

	return 0;
}