
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main() {
	string s;
	int b, ans;
	long size;

	cin >> s >> b;

	size = s.size();

	for (int i = 0; i < size; i++) {
		if (s[i] >= '0' && s[i] <= '9') {
			ans += pow(b, size - i - 1) * (s[i] - '0');
		}
		else {
			ans += pow(b, size - i - 1) * (s[i] - 'A' + 10);
		}
	}

	cout << ans;
	return 0;
}