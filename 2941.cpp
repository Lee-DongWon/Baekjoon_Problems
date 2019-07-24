#include <iostream>
#include <string>

using namespace std;

int main() {
	int cnt = 0;
	string word;

	cin >> word;

	for (int i = 0; i < word.length(); i++) {
		cnt++;
		if (word[i] == 'c' && word[i + 1] == '=') {
			cnt--;
		}
		else if (word[i] == 'c' && word[i + 1] == '-') {
			cnt--;
		}
		else if (word[i] == 'd' && word[i + 1] == 'z' && word[i + 2] == '=') {
			cnt--;
		}
		else if (word[i] == 'd' && word[i + 1] == '-') {
			cnt--;
		}
		else if (word[i] == 'l' && word[i + 1] == 'j') {
			cnt--;
		}
		else if (word[i] == 'n' && word[i + 1] == 'j') {
			cnt--;
		}
		else if (word[i] == 's' && word[i + 1] == '=') {
			cnt--;
		}
		else if (word[i] == 'z' && word[i + 1] == '=') {
			cnt--;
		}
	}

	cout << cnt << endl;

	return 0;
}