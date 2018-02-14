#include<iostream>

using namespace std;

const int MAX = 13;

int n;
int arr[MAX];
int lotto[6];

 void DFS(int idx, int num) {
	if (num == 4) {
		for (int i = 0; i < 4; i++) {

			cout << lotto[i];
			if (i != 4)
				cout << " ";
		}
		cout << endl;
		return;
	}
	if (idx == n)
		return;
 	lotto[num] = arr[idx];
	DFS(idx + 1, num + 1);
	DFS(idx + 1, num);
}

int main(void) {
	while (1) {
		cin >> n;
		if (n == 0)
			return 0;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];

		}
		DFS(0, 0);
		cout << endl;

	}
	return 0;


}

/*
7 1 2 3 4 5 6 7
8 1 2 3 5 8 13 21 34
0

*/