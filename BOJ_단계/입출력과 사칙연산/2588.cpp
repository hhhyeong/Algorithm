#include<iostream>

using namespace std;

int main() {
    int N, M;
    cin >> N;
    cin >> M;

    // cout << N << " " << M;
    int rslt = N * M;
    int remain=1, num=1;

    while(num != 0) {
        remain = M % 10;
        // cout << remain << endl;
        num = M / 10;
        M = num;
        cout << N * remain << endl;
    }
    cout << rslt;
}