#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int N;
vector<int> list;

int main() {
	int var;
	cin >> N;
	for (int i = 0; i<N; i++) {
		cin >> var;
		list.push_back(var);
	}
	sort(list.begin(), list.end());
	for (int i = 0; i<N; i++) {
		cout << list.front() << " ";
		list.pop_back();
	}
	return 0;
}
