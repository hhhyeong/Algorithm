/*
14889_��ŸƮ�͸�ũ
*/

#include <iostream>
#include <algorithm>
#define MAX 20

using namespace std;

int map[MAX + 1][MAX + 1];
int N;
int minn = 1000000000;
int team1[MAX / 2 + 1];
int team2[MAX / 2 + 1];
bool check[MAX + 1];


void powerCompare() {
	int result = 0;
	int sum1 = 0;
	int sum2 = 0;
	int j = 1;
	for (int i = 1; i <= N; i++) {
		if (check[i] == 0) {
			team2[j++] = i;
		}
	}

	for (int i = 1; i <= N / 2; i++) {
		for (int j = 1; j <= N / 2; j++) {
			sum1 += map[team1[i]][team1[j]];
			sum2 += map[team2[i]][team2[j]];
		}
	}

	result = abs(sum1 - sum2);

	if (minn >= result) {
		minn = result;
	}
}

void dfs(int level, int member) {
	if (level == N / 2) {
		team1[level] = member;
		check[team1[level]] = 1;
		powerCompare();
	}
	// else�� �����ָ� ending���� ������ �Լ��� return ���� �ʴ� �̷� ���, ��������� �����ع����� ��.
	else {
		team1[level] = member;
		check[team1[level]] = 1;
		for (int i = member + 1; i <= N; i++) {
			dfs(level + 1, i);
			check[team1[level + 1]] = 0;		// ��� ���� ��, check���� �ǵ��� ���ƾ� �ϴµ�.
												// check[team1[level]] = 0 ����, check[team1[level+1]] = 0 ���� �򰥷���.
												// level+1�� �μ��� ���� dfs�� �����⶧���� �翬�� level�� +1�� �������.
		}
	}
}


int main() {

	cin >> N;							// 6

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> map[i][j];
		}
	}

	dfs(1, 1);

	cout << minn;

	return 0;
}