/*
	TS #1) q.pop()하는걸 까먹엇네.
	TS #2) vs에선 정답찍히는데, boj에선 컴파일에러남.
		=> memset함수쓰려면 cstring클래스 include해야지..!
*/
/*
	
*/
#include<iostream>
#include<cstring>
#include<queue>
#define MAX 50

using namespace std;

int M, N;
int max_value;
char map[MAX + 1][MAX + 1];
int visited[MAX + 1][MAX + 1];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
queue<pair<int, int>> q;


// 시작점을 [i][j] 로 했을때, 가장 멀리 떨어진곳까지 BFS탐색하기.
void bfs(int i, int j) {	// [0][1]
	q.push(make_pair(i, j));
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int k = 0; k < 4; k++) {
			int nx = x + dx[k];
			int ny = y + dy[k];
			if (map[nx][ny] == 'L' && visited[nx][ny] == 0) {
				// 시작점 x,y로부터 1만큼 떨어진 곳에 대하여 visited배열 값을 +1시킴.
				visited[nx][ny] = visited[x][y] + 1;

				// 
				if (max_value <= visited[nx][ny]) {
					max_value = visited[nx][ny];
				}
				q.push(make_pair(nx, ny));	// (1,1), (0,2)
			}
		}
	}
}


int main() {
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (map[i][j] == 'L') {
				// 모든 칸에 대해 시작점으로 두고, 육지일 때 탐색 시작.
				bfs(i, j);	// [0][1].
				memset(visited, 0, sizeof(visited));
			}
		}
	}

	cout << max_value << endl;

	return 0;
}