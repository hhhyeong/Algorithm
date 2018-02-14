//6603.cpp
#include <iostream>

using namespace std;

const int MAX = 13;

int n;
int arr[MAX];
int lotto[6];

void DFS(int idx, int num)
{
	if (num == 6)
	{
		for (int i = 0; i < 6; i++)
		{
			cout << lotto[i];

			if (i != 5)
			{
				cout << " ";
			}
		}
		cout << endl;
		return;
	}

	if (idx == n)
	{
		return;
	}

	lotto[num] = arr[idx];
	DFS(idx + 1, num + 1);
	DFS(idx + 1, num);
}

int main()
{
	while (1)
	{
		cin >> n;

		if (n == 0)
		{
			return 0;
		}

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		DFS(0, 0);

		cout << endl;
	}
	return 0;
}