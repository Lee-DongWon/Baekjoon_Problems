#include <stdio.h>

int map[50][50] = { 0 };
int visit[50][50] = { 0 };
int dx[8] = { 0,1,1,1,0,-1,-1,-1 };
int dy[8] = { 1,1,0,-1,-1,-1,0,1 };
int h, w, num;

void DFS(int x, int y) {
	int i, now_x, now_y;
	visit[x][y] = 1;

	for (i = 0; i < 8; i++) {
		now_x = x + dx[i];
		now_y = y + dy[i];

		if (now_x >= h || now_x < 0 || now_y >= w || now_y < 0) {
			continue;
		}

		if (visit[now_x][now_y] == 0 && map[now_x][now_y] == 1) {
			DFS(now_x, now_y);
		}
	}

}

int main() {

	while (1) {
		num = 0;

		scanf("%d %d", &w, &h);

		if (h == 0 && w == 0) {
			return 0;
		}

		for (int i = 0; i < 50; i++) {
			for (int j = 0; j < 50; j++) {
				visit[i][j] = 0;
				map[i][j] = 0;
			}
		}

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				scanf("%d", &map[i][j]);
			}
		}



		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (visit[i][j] == 0 && map[i][j] == 1) {
					DFS(i, j);
					num++;
				}
			}
		}

		printf("%d\n", num);
	}

	return 0;
}