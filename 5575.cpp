#include <stdio.h>

int main() {
	int start_hour, start_minute, start_second, finish_hour, finish_minute, finish_second;

	for (int i = 0; i < 3; i++) {
		scanf("%d %d %d %d %d %d", &start_hour, &start_minute, &start_second, &finish_hour, &finish_minute, &finish_second);
		int work_hour, work_minute, work_second;

		if (finish_second >= start_second) {
			work_second = finish_second - start_second;
			if (finish_minute >= start_minute) {
				work_minute = finish_minute - start_minute;
				work_hour = finish_hour - start_hour;
			}
			else {
				work_minute = finish_minute - start_minute + 60;
				work_hour = finish_hour - start_hour - 1;
			}
		}
		else {
			work_second = finish_second - start_second + 60;
			finish_minute -= 1;
			if (finish_minute < 0) {
				finish_minute += 60;
				finish_hour -= 1;
			}
			if (finish_minute >= start_minute) {
				work_minute = finish_minute - start_minute;
				work_hour = finish_hour - start_hour;
			}
			else {
				work_minute = finish_minute - start_minute + 60;
				work_hour = finish_hour - start_hour - 1;
			}
		}
		printf("%d %d %d\n", work_hour, work_minute, work_second);
	}

	return 0;
}