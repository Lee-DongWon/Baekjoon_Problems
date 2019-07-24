#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
	string s;

	cin >> s;
	while (1)
	{
		if (s.length() % 3 == 0)
			break;
		s = '0' + s;
	}

	string result;
	for (int i = s.length() - 3; i >= 0;)
	{
		result += ((s[i] - '0') * 4 + (s[i + 1] - '0') * 2 + (s[i + 2] - '0')) + '0';
		i -= 3;
	}
	reverse(result.begin(), result.end());
	cout << result << "\n";
	return 0;
}