#include <iostream>
#include <string>

using namespace std;

int main() {
	int num = 1;
	while (1) {
		int a, b;
		string c;
		cin >> a >> c >> b;
		if (c == "E") {
			return 0;
		}
		else {
			cout << "Case " << num << ": ";
			num++;
			if (c == ">") {
				if (a > b) {
					cout << "true" << endl;
				}
				else {
					cout << "false" << endl;
				}
			}
			else if (c == ">=") {
				if (a >= b) {
					cout << "true" << endl;
				}
				else {
					cout << "false" << endl;
				}
			}
			else if (c == "<") {
				if (a < b) {
					cout << "true" << endl;
				}
				else {
					cout << "false" << endl;
				}
			}
			else if (c == "<=") {
				if (a <= b) {
					cout << "true" << endl;
				}
				else {
					cout << "false" << endl;
				}
			}
			else if (c == "==") {
				if (a == b) {
					cout << "true" << endl;
				}
				else {
					cout << "false" << endl;
				}
			}
			else if (c == "!=") {
				if (a != b) {
					cout << "true" << endl;
				}
				else {
					cout << "false" << endl;
				}
			}
		}
	}

	return 0;
}