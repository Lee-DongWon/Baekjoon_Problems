#include <iostream>
#include <string>

using namespace std;

int main()
{
	char a[5] = { 'a','e','i','o','u' };
	string s;
	while (true) {
		bool c = false;
		bool t = true;
		int sum = 0, num = 0;
		cin >> s;
		if (s == "end") break;
		for (int i = 0; i < s.length(); i++) {
			for (int j = 0; j < 5; j++) {
				if (s[i] == a[j]) c = true;
			}
		}
		if (!c) {
			cout << '<' << s << '>' << " is not acceptable." << endl;
			t = false;
		}
		else {
			for (int i = 0; i < s.length(); i++) {
				bool r = false;
				if (s[i - 1] == s[i] && s[i] != 'e'&&s[i] != 'o') {
					cout << '<' << s << '>' << " is not acceptable." << endl;
					t = false;
					break;
				}
				for (int j = 0; j < 5; j++) {
					if (s[i] == a[j]) r = true;
				}
				if (r) {
					sum = 0;
					num++;
				}
				else {
					num = 0;
					sum++;
				}
				if (num == 3 || sum == 3) {
					cout << '<' << s << '>' << " is not acceptable." << endl;
					t = false;
					break;
				}
			}
		}
		if (t)cout << '<' << s << '>' << " is acceptable." << endl;
	}
	return 0;
}