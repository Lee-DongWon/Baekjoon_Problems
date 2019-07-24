#include <iostream>
#include <string>

using namespace std;

int main() {
	string message;
	int sad = 0, happy = 0;
	getline(cin, message);

	for (int i = 0; i < message.length() - 2; i++) {
		if (message.at(i) == ':' && message.at(i + 1) == '-') {
			if (message.at(i + 2) == '(') {
				sad++;
			}
			else if (message.at(i + 2) == ')') {
				happy++;
			}
		}
	}



	if (sad == 0 && happy == 0) {
		cout << "none" << endl;
	}
	else if (sad > happy) {
		cout << "sad" << endl;
	}
	else if (happy > sad) {
		cout << "happy" << endl;
	}
	else {
		cout << "unsure" << endl;
	}

	return 0;
}