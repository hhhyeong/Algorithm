/*
#3) 에서 자꾸 77이나오네.
test_case반복문안돌고 따로 input입력하면 정확히나오는데..
*/

#include<iostream>
#include<algorithm>
#include<cstring>
#define SC_RANGE 100		// 0점 ~ 100점
#define STUDENT 1000
using namespace std;

int T;
int test_case;
int score;
int scores[SC_RANGE + 1];	// 0점 ~ 100점
int result;
int max_count;

int main() {
	cin >> T;
	for (int test_case = 1; test_case <= T; test_case++) {
		cin >> test_case;
		for (int i = 0; i < STUDENT; i++) {
			cin >> score;
			scores[score]++;
		}
		for (int i = 0; i <= SC_RANGE; i++) {
			if (max_count <= scores[i]) {
				max_count = scores[i];
				result = i;
				//cout << result << endl;
				//cout << i << endl;
			}
		}
		//cout << scores[77] << endl;
		//cout << scores[79] << endl;
		cout << "#" << test_case << " " << result << endl;

		// 초기화.
		max_count = 0;
		result = 0;
		memset(scores, 0, sizeof(scores));
	}

	return 0;
}