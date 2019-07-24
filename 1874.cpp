#include <iostream>
#include <stdio.h>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, temp = 1;
	stack<int> st;
	vector<char> ans;

	cin >> n;

	int *arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		if (st.empty() || st.top() != arr[i]) {
			while (1) {
				if (temp > n) {
					printf("NO\n");
					return 0;
				}
				st.push(temp);
				temp++;

				ans.push_back('+');
				if (st.top() == arr[i]) {
					st.pop();
					ans.push_back('-');
					break;
				}
			}
		}
		else if (st.top() == arr[i]) {
			st.pop();
			ans.push_back('-');
		}
	}

	for (int i = 0; i < ans.size(); i++) {
		printf("%c\n", ans[i]);
	}

}