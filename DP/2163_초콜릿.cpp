#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int MAX = 300;

int n, m;
int cache[MAX + 1][MAX + 1];

int DP(int x, int y)
{
	if (x == 1 && y == 1)
	{
		return 0;
	}

	int& ret = cache[x][y];

	if (ret != -1)
	{
		return ret;
	}

	ret = n * m - 1;

	for (int i = 1; i < x; i++)
	{
		// x축으로 i번째의 금을 잘랐을때, i와 x-i로 나뉘므로,
		// 잘린 초콜릿의 크기는 y * i 와 y * (x-i) 로 표현할 수 있으므로.
		// DP(x-i, y) + DP(i, y) + 1(i번째에 자른 횟수) 로 계산해주면 총 자른 개수가 된다.
		ret = min(ret, DP(x - i, y) + DP(i, y) + 1);				// + 1 까먹을 수 있음 *****주의!!!
	}
	for (int i = 1; i < y; i++)
	{
		ret = min(ret, DP(x, y - i) + DP(x, i) + 1);
	}
	return ret;
}

int main()
{
	cin >> n >> m;

	memset(cache, -1, sizeof(cache));

	cout << DP(n, m) << endl;

	return 0;
}