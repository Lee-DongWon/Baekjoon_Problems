#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main() {
	int t;

	cin >> t;

	while (t--) {
		double a, result;

		cin >> a;
		result = a;
		string str;

		getline(cin, str);
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '@') {
				result = result * 3;
			}
			else if (str[i] == '%') {
				result = result + 5;
			}
			else if (str[i] == '#') {
				result = result - 7;
			}
		}

		printf("%.2lf\n", result);
	}

	return 0;
}