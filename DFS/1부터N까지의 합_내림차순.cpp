/*
	������������ 1���� N������ �� ���ϱ�
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
	cout << "1���� N������ ���� : " << dfs(N) << endl;
	return 0;
}