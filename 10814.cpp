#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

typedef long long ll;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;

	vector<string> name(n);

	vector< pair<int, int>> age(n);

	for (int i = 0; i < n; i++) {
		cin >> age[i].first >> name[i];
		age[i].second = i;
	}

	sort(age.begin(), age.end());

	for (int i = 0; i < n; i++) {
		cout << age[i].first << " " << name[age[i].second] << "\n";
	}
}