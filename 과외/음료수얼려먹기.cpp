#include <stdio.h>
const int N = 4;
const int M = 5;

void dfs(int map[][M], int x, int y) {

	if (y < 0 || y >= N || x< 0 || x >= M) {
		return;
	}
	else if (map[y][x] == 1) {
		return;
	}
	else {
		map[y][x] = 1;
		dfs(map, x + 1, y);
		dfs(map, x, y + 1);
		dfs(map, x - 1, y);
		dfs(map, x, y - 1);
	}
	return;
}

struct point {
	int x;
	int y;
};

int bfs(int map2[][6],int x,int y) {
	
	int num = 1;
	int front = 0;
	int rear = 1;

	struct point q[10000] = { 0, };
	q[0].x = x;
	q[0].y = y;


	while (front<rear){
		struct point v = q[front];
		int now_x = v.x;
		int now_y = v.y;
		/*if (now_x == 6 - 1 && now_y == 5 - 1)
		{
			for (int i = 0;i < 5;i++)
			{
				for (int j = 0;j < 6;j++)
				{
					printf("%2d ", map2[i][j]);
				}
				printf("\n");
			}
			return map2[now_y][now_x]+1;
		}*/


		if (now_x+1 <6 && map2[now_y][now_x + 1] == 1 && !(now_y == 0 && now_x +1 == 0)) {
			struct point new_v = { x = now_x + 1, y = now_y };
			q[rear++] = new_v;
			map2[now_y][now_x+1] = map2[now_y][now_x] + 1;
		}
		if (now_x -1 >=0 && map2[now_y][now_x - 1] == 1 && !(now_y  == 0 && now_x-1 == 0)) {
			struct point new_v = { x = now_x - 1, y = now_y };
			q[rear++] = new_v;
			map2[now_y][now_x-1] = map2[now_y][now_x] + 1;
		}
		if (now_y + 1 <5 && map2[now_y+1][now_x] == 1 && !(now_y+1 == 0 && now_x == 0)) {
			struct point new_v = { x = now_x, y = now_y+1 };
			q[rear++] = new_v;
			map2[now_y + 1][now_x] = map2[now_y][now_x] + 1;
		}
		if (now_y -1 >=0 && map2[now_y-1][now_x] ==1 && !(now_y - 1 == 0 && now_x == 0)) {
			struct point new_v = { x = now_x, y = now_y-1 };
			q[rear++] = new_v;
			map2[now_y - 1][now_x] = map2[now_y][now_x] + 1;
		}
		front++;
	}
	for (int i = 0;i < 5;i++)
	{
		for (int j = 0;j < 6;j++)
		{
			printf("%2d ", map2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
int main() {
	int map[4][5] = { {0,0,1,1,0 }, { 0,0,0,1,1 }, { 1,1,1,1,1 }, { 0,0,0,0,0 } };
	
	//printf("%d",map[0][1]);
	int count = 0;
	/*
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if ( map[i][j] == 0) {
				dfs(map, i, j);
				count++;
			}
		}
	}
	*/
	int map2[5][6] = { {1,0,1,0,1,0 }, { 1,1,1,1,1,1 }, { 0,0,0,0,0,1 }, { 1,1,1,1,1,1 },{1,1,1,1,1,1} };
	int result = bfs(map2, 0, 0);

}