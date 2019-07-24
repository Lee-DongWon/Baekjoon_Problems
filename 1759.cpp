#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int l, c;
char arr[16];

void go(int index, int cnt, int collection, int consonant, string s) {
	if (cnt == l) {
		if (collection >= 1 && consonant >= 2) {
			cout << s << endl;
		}
		return;
	}

	if (index == c) {
		return;
	}
	if (arr[index] == 'a' || arr[index] == 'e' || arr[index] == 'i' || arr[index] == 'o' || arr[index] == 'u')
		go(index + 1, cnt + 1, collection + 1, consonant, s + arr[index]);
	else
		go(index + 1, cnt + 1, collection, consonant + 1, s + arr[index]);
	go(index + 1, cnt, collection, consonant, s);
}

int main() {
	cin >> l >> c;
	for (int i = 0; i < c; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + c);
	go(0, 0, 0, 0, "");

	return 0;
}