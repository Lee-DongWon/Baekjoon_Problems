#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

bool cmp(string a, string b) {
	if (a.length() < b.length()) {
		return true;
	}
	if (a.length() == b.length()) {
		for (int i = 0; i < a.length(); i++) {
			if (a[i] == b[i]) {
				continue;
			}
			else if (a[i] < b[i]) {
				return true;
			}
			else {
				return false;
			}
		}
	}
	return false;
}

int main() {
	int n;
	cin >> n;

	vector<string> v;
	map<string, bool>visited;
	for (int i = 0; i < n; i++) {
		string temp;

		cin >> temp;

		if (!visited.count(temp)) {
			visited[temp] = true;
			v.push_back(temp);
		}
	}

	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}

	return 0;
}