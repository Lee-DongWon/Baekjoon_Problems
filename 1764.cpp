#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n, m;

	scanf("%d %d", &n, &m);

	vector<string> name;
	vector<string> name_result;

	name.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> name[i];
	}

	sort(name.begin(), name.end());

	string str;
	for (int i = 0; i < m; i++) {
		cin >> str;

		if (binary_search(name.begin(), name.end(), str)) {
			name_result.push_back(str);
		}
	}

	sort(name_result.begin(), name_result.end());

	printf("%d\n", name_result.size());
	for (int i = 0; i < name_result.size(); i++) {
		printf("%s\n", name_result[i].c_str());
	}

	return 0;
}