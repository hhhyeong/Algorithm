/*
���� ū ���簢�� ���ϱ�(1915)�� ����.
(boj.kr/1915)

	TS #1)
	���� �� �ִ��� �Ǻ��� ��
		(x < 0 || x >= M || y < 0 || y >= N)
		�Ǵ�,
		(x >= 0 && x < M && y >= 0 && y < N)
	�� ����Ѵ�. �� �� �ϳ���. �򰥷��� ����� �ʵ��� ����!!

	TS #2)
	�ð��ʰ�.
	(1000 * 1000) * 1000 * 1000
	= 1,0000,0000,0000

	1�� : 1��!
	1��......; : 10000�� ;;;;
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

	cin >> M >> N;	// M:����, N:����
	// N, M �� �� ���� ���� min�� ����.
	if (N < M)
		min = N;
	else
		min = M;
	
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			// 0:����, 1:����, 2:��.
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] != 0) continue;
			// if (visited[i][j] != 0) continue;
			// k : ���簢�� ������ �Ѻ��� ���̰� �� �� �ִ� ����.
			for (int k = 1; k <= min; k++) {
				// ���� �ȿ� ��ֹ�(1,2)�� �ִ��� Ȯ��. �ϳ��� ������ flag = false
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
			// ������ �ٲ𶧸��� flag �ʱ�ȭ.
			flag = true;
		}
	}

	cout << max_len<< endl;

	return 0;
}