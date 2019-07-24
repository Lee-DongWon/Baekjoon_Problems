#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int h, w, room, front, back, result;
		scanf("%d %d %d", &h, &w, &room);

		if (room%h != 0) {
			back = room / h + 1;
			front = room % h;

			result = 100 * front + back;
		}
		else {
			back = room / h;
			front = h;

			result = 100 * front + back;
		}
		cout << result << endl;
	}

	return 0;
}