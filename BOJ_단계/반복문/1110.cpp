#include<iostream>

using namespace std;

int main() {
    int ori, N, count = 0;
    cin >> N;
    ori = N;

    while(1) {
        N = int(N % 10)*10 + int((int(N/10) + int(N%10)) % 10);
        count++;
        // cout << count << "회 반복 : " << N << endl;


        if (N == ori) {
            cout << count;
            break;
        }
    }
}