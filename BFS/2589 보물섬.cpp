/*
	TS #1) q.pop()�ϴ°� ��Ծ���.
	TS #2) vs���� ���������µ�, boj���� �����Ͽ�����.
		=> memset�Լ������� cstringŬ���� include�ؾ���..!
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


// �������� [i][j] �� ������, ���� �ָ� ������������ BFSŽ���ϱ�.
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
				// ������ x,y�κ��� 1��ŭ ������ ���� ���Ͽ� visited�迭 ���� +1��Ŵ.
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
				// ��� ĭ�� ���� ���������� �ΰ�, ������ �� Ž�� ����.
				bfs(i, j);	// [0][1].
				memset(visited, 0, sizeof(visited));
			}
		}
	}

	cout << max_value << endl;

	return 0;
}