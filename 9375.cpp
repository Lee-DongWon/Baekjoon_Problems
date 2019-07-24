#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

int main(void) {
	int t; cin >> t;
	for (int i = 0; i < t; i++) {
		unordered_map<string, int> data;
		int n; cin >> n;
		for (int i = 0; i < n; i++) {
			string __name__; string kind;
			cin >> __name__ >> kind;
			if (data.find(kind) == data.end()) {
				data.insert({ kind,1 });
			}
			else {
				data[kind]++;
			}

		}
		int result = 1;
		for (auto kind : data) {

			result *= (kind.second + 1);
		}
		result -= 1;
		cout << result << endl;
	}
	return 0;
}