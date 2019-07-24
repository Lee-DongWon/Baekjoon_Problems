#include <iostream>
#include <string>

using namespace std;

int main() {
	while (1) {
		string number;
		cin >> number;

		if (number == "0") {
			return 0;
		}
		else {
			int sum = 0;
			for (int i = 0; i < number.length(); i++) {
				sum += number.at(i) - '0';
			}
			while (sum > 9) {
				int n = sum;
				sum = 0;
				while (n > 0) {
					sum += n % 10;
					n /= 10;
				}
			}

			cout << sum << endl;
		}
	}
}