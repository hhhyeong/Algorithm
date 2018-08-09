/*
	오름차순으로 1부터 N까지의 합 구하기
	=> index, sum이라는 변수를 더 만들어야 함.
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
	cout << "1부터 N까지의 합은 : " << dfs(1, 0) << endl;
	return 0;
}