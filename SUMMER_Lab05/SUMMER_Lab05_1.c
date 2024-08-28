#include <stdio.h>
#define MAX 50

int w, h;
int map[MAX][MAX];
int visited[MAX][MAX];

int dx[] = { -1,1,0,0,-1,-1,1,1 };
int dy[] = { 0,0,-1,1,-1,1,-1,1 };

void dfs(int x, int y) {
	visited[x][y] = 1;

	for (int i = 0; i < 8; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= 0 && nx < h && ny >= 0 && ny < w && !visited[nx][ny] && map[nx][ny] == 1) {
			dfs(nx, ny);
		}
	}
}

int countIslands() {
	int count = 0;

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (map[i][j] == 1 && !visited[i][j]) {
				dfs(i, j);
				count++;
			}
		}
	}

	return count;
}

int main() {
	while (1) {
		scanf("%d %d", &w, &h);

		if (w == 0 && h == 0) break;

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				scanf("%d", &map[i][j]);
				visited[i][j] = 0;
			}
		}

		int result = countIslands();
		printf("%d\n", result);
	}

	return 0;
}