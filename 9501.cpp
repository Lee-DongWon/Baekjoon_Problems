#include <iostream>

using namespace std;

int main()
{
	int t, n, m;
	cin >> t;
	while (t--)
	{
		cin >> n >> m;
		double velocity, fuel, consume;
		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> velocity >> fuel >> consume;
			if (velocity * fuel / consume >= m) ans++;
		}
		cout << ans << endl;
	}
	return 0;
}