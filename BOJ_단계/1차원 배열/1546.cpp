#include<iostream>

using namespace std;

int main() {
    double N;
    double M = 0;
    double sum = 0;
    double score[100];
    double avg = 0;

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
        sum += score[i];
    }
    cout << sum << endl;

    // avg = ;
    cout << (sum / M) * 100 / N << endl;
}