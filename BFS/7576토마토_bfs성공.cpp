/* 2차원배열 하나만 사용해서 풀기 성공. */
#include<iostream>
#include<queue>

using namespace std;

int arr[1001][1001];
int M, N;			// M : 가로, N : 세로.
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };



int main(void) {
	queue<pair <int, int> > q;

	cin >> M >> N;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 1) {
				q.push(make_pair(i, j));		// 세로, 가로
			}
		}
	}

	while (!q.empty()) {
		int x = q.front().first;		// 세로
		int y = q.front().second;		// 가로
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];			// 세로 N
			int ny = y + dy[i];			// 가로 M
			//if (nx >= 1 && ny >= 1 && nx <= M && ny <= N) continue;		// else이면 어쩔껀디?
			if (nx >= 1 && ny >= 1 && nx <= N && ny <= M) {
				if (arr[nx][ny] == 0) {
					arr[nx][ny] = arr[x][y] + 1;
					q.push(make_pair(nx, ny));
				}
			}
		}
	}

	int max = 0;
	for (int i = 1; i < N; i++) {
		for (int j = 1; j < M; j++) {
			if (max < arr[i][j])
				max = arr[i][j];
		}
	}
	
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			if (arr[i][j] == 0) {
				cout << -1;
				return 0;
			}
		}
	}


	cout << max-1;

	return 0;
}