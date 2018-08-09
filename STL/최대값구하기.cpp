/*
vector�� ũ��� verter<int> v�� ���� ��, v.size()�̰�,
int arr[] = {2,3,4} �迭�� ũ���, sizeof(arr)/sizeof(int) �̴�.
*/

#include<iostream>
#include<vector>

using namespace std;
int N;
int arr[] = { 1, 55, 34, 2, 21 };
int max = arr[0];

int dfs(int index) {
	if (index == sizeof(arr)/sizeof(int)) {
		return max;
	} 
	if (arr[index] >= max) {
		max = arr[index];
		cout << max << " " << endl;
	}
	dfs(++index);
}

int main() {
	cout << dfs(0) << endl;
	return 0;
}