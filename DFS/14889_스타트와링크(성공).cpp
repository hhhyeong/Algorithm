/*
14889_스타트와링크
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
	// else를 안해주면 ending조건 끝나고 함수가 return 되지 않는 이런 경우, 재귀조건을 실행해버리게 됨.
	else {
		team1[level] = member;
		check[team1[level]] = 1;
		for (int i = member + 1; i <= N; i++) {
			dfs(level + 1, i);
			check[team1[level + 1]] = 0;	// 재귀 끝난 후, check값을 되돌려 놓아야 하는데.
							// check[team1[level]] = 0 인지, check[team1[level+1]] = 0 인지 헷갈렷음.
							// level+1을 인수로 갖는 dfs가 끝났기때문에 당연히 level에 +1을 해줘야함.
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
