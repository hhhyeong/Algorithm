/*
가장 큰 정사각형 구하기(1915)랑 유사.
(boj.kr/1915)

	TS #1)
	범위 내 있는지 판별할 때
		(x < 0 || x >= M || y < 0 || y >= N)
		또는,
		(x >= 0 && x < M && y >= 0 && y < N)
	를 써야한다. 둘 중 하나다. 헷갈려서 섞어쓰지 않도록 주의!!

	TS #2)
	시간초과.
	(1000 * 1000) * 1000 * 1000
	= 1,0000,0000,0000

	1억 : 1초!
	1조......; : 10000초 ;;;;
*/

#include<iostream>
#include<cstring>
#define MAX 1000

using namespace std;

int map[MAX][MAX];
int M, N;

int main() {
	int max_len = 0;
	int min = 0;
	bool flag = true;
	// int visited[MAX][MAX];

	// memset(visited, 0, sizeof(visited));

	cin >> M >> N;	// M:세로, N:가로
	// N, M 중 더 작은 값을 min에 저장.
	if (N < M)
		min = N;
	else
		min = M;
	
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			// 0:들판, 1:나무, 2:돌.
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] != 0) continue;
			// if (visited[i][j] != 0) continue;
			// k : 정사각형 목장의 한변의 길이가 될 수 있는 범위.
			for (int k = 1; k <= min; k++) {
				// 목장 안에 장애물(1,2)가 있는지 확인. 하나라도 있으면 flag = false
				for (int x = i; x < i + k; x++) {
					for (int y = j; y < j + k; y++) {
						if ((x < 0 || x >= M || y < 0 || y >= N) || map[x][y] != 0) {
							flag = false;
						}
					}
				}
				if ((flag == true) && (max_len <= k)) {
					max_len = k;
				}
				if (flag == false)
					break;
			}
			// 시작점 바뀔때마다 flag 초기화.
			flag = true;
		}
	}

	cout << max_len<< endl;

	return 0;
}