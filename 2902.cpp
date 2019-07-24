#include <iostream>
#include <string>

using namespace std;

int main() {
	int i = 1;
	char shortname[50];
	string str;
	getline(cin, str);

	shortname[0] = str[0];

	for (int j = 1; j < str.length(); j++) {
		if (str[j] == '-') {
			shortname[i] = str[j + 1];
			i++;
		}
	}

	for (int j = 0; j < i; j++) {
		cout << shortname[j];
	}


	return 0;
}