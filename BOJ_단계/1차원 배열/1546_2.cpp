#include<iostream>

using namespace std;

int main() {
    double N;
    double v;
    double M = 0;
    double sum = 0;

    cin >> N;

    // 최댓값 ㅡ 찾기
    for (int i = 0; i < N; i++) {
        cin >> v;
        if (M <= v) {
            M = v;
        }
        sum += v;
    }
    cout << sum << endl;

    cout << (sum / M) * 100 / N << endl;
}