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
		// x������ i��°�� ���� �߶�����, i�� x-i�� �����Ƿ�,
		// �߸� ���ݸ��� ũ��� y * i �� y * (x-i) �� ǥ���� �� �����Ƿ�.
		// DP(x-i, y) + DP(i, y) + 1(i��°�� �ڸ� Ƚ��) �� ������ָ� �� �ڸ� ������ �ȴ�.
		ret = min(ret, DP(x - i, y) + DP(i, y) + 1);				// + 1 ����� �� ���� *****����!!!
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