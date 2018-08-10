/*
	vector에 입력할땐 push_back() 쓰고,
	출력할땐 인덱스값으로 접근하기.

	정렬 : sort(v.begin(), v.end()) 처음값, 끝값 순서로 적어줘야함.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n = 0, a = 0;
	vector<int> v;
	cin >> n;
	for (int i = 0; i<n; i++) {
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i<n; i++) {
		cout << v[i];
		cout << " ";
	}
	return 0;
}