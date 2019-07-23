#include <iostream>
#include <algorithm>
using namespace std;

int arr[5];
int main()
{
	int cnt = 0;
	for (int i = 0; i < 5; i++)
		cin >> arr[i];

	sort(arr, arr + 5);
	for (int i = arr[2]; i <= arr[2] * arr[3] * arr[4]; i++)
	{
		cnt = 0;
		for (int j = 0; j < 5; j++)
			if (i % arr[j] == 0)
				cnt++;

		if (cnt >= 3)
		{
			cout << i;
			return 0;
		}
	}
}