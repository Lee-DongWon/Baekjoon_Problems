#include <stdio.h>

int main() {
	int result;

	int n;

	scanf("%d", &n);
	result = n;

	while (1) {
		char x;
		int y;
		scanf("%c", &x);

		if (x == '+') {
			scanf("%d", &y);
			result += y;
		}
		else if (x == '-') {
			scanf("%d", &y);
			result -= y;
		}
		else if (x == '*') {
			scanf("%d", &y);
			result *= y;
		}
		else if (x == '/') {
			scanf("%d", &y);
			result /= y;
		}
		else if (x == '=') {
			printf("%d\n", result);
			return 0;
		}
	}
}