/*
	������������ 1���� N������ �� ���ϱ�
	=> index, sum�̶�� ������ �� ������ ��.
*/

#include<iostream>

using namespace std;
int N;
int sum = 0;

int dfs(int index, int sum) {
	if (index == N)
		return sum;
	sum += index;
	dfs(++index, sum);
}

int main() {
	cin >> N;
	cout << "1���� N������ ���� : " << dfs(1, 0) << endl;
	return 0;
}