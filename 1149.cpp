#include <stdio.h>

int Min(int a, int b) {
	if (a <= b) {
		return a;
	}
	else {
		return b;
	}
}

int main() {
	int n, result;
	int red[1000] = { 0 };
	int green[1000] = { 0 };
	int blue[1000] = { 0 };
	int red_result[1000] = { 0 };
	int green_result[1000] = { 0 };
	int blue_result[1000] = { 0 };

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &red[i], &green[i], &blue[i]);
	}

	red_result[0] = red[0];
	green_result[0] = green[0];
	blue_result[0] = blue[0];

	for (int i = 1; i < n; i++) {
		red_result[i] = Min(red[i] + blue_result[i - 1], red[i] + green_result[i - 1]);
		green_result[i] = Min(green[i] + red_result[i - 1], green[i] + blue_result[i - 1]);
		blue_result[i] = Min(blue[i] + red_result[i - 1], blue[i] + green_result[i - 1]);
	}

	result = Min(Min(red_result[n - 1], green_result[n - 1]), blue_result[n - 1]);

	printf("%d", result);

	return 0;
}