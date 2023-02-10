// idea)
// 1부터 30까지(int j)의 숫자를 for문으로 돌면서,
// arr에 포함되는 숫자인지 확인.
// <==> arr[i] (i는 0부터 27)의 숫자와 일치하는지 확인.
// <==> arr[i]를 모두 돌아도 j라는 숫자가 없으면, 출력.

#include<iostream>

using namespace std;

int main() {
    int n;
    int arr[28];
    int i, j;

    // 배열 arr 초기화
    for (i=0; i<28; i++) {
        cin >> arr[i];
    }

    for (j=1; j<=30; j++) {
        for (i=0; i<28; i++) {
            if (j == arr[i])
                break;
        }
        // 이전 for문에서 돌던 마지막 조건 이후의 i값
        // <=> 이전 for문에서 다 돌아도 찾을 수 없었던 j값
        if (i == 28) {
            cout << j << endl;
        }
    }
}