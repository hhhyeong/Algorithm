/*
	내림차순으로 1부터 N까지의 합 구하기
*/

#include<iostream>

using namespace std;
int N;

int dfs(int N) {
	if (N == 1)
		return 1;
	return N + dfs(N - 1);
}

int main() {
	cin >> N;
	cout << "1부터 N까지의 합은 : " << dfs(N) << endl;
	return 0;
}