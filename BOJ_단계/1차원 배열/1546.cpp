#include<iostream>

using namespace std;

int main() {
    int N, M = 0;
    int sum = 0;
    int score[100];

    cin >> N;

    // 최댓값 ㅡ 찾기
    for (int i = 0; i < N; i++) {
        cin >> score[i];
        if (M <= score[i]) {
            M = score[i];
        }
    }
    // cout << M << endl;

    for (int i = 0; i < N; i++) {
        score[i] = double(score[i]/M)*100;
        cout << score[i] << endl;
        sum += score[i];
        cout << sum << endl;
    }
    cout << sum/N;
}