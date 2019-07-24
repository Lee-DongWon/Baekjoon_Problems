#include <iostream>

using namespace std;

int graph[100][100] = { 0 };

void color(int a, int b, int x, int y, int graph[100][100]) {
	for (int i = a; i < x; i++) {
		for (int j = b; j < y; j++) {
			graph[i][j] = 1;
		}
	}
}

int main() {
	int area = 0;

	for (int i = 0; i < 4; i++) {
		int a, b, x, y;

		cin >> a >> b >> x >> y;

		color(a, b, x, y, graph);
	}

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (graph[i][j] == 1) {
				area++;
			}
		}
	}

	cout << area << endl;

	return 0;
}