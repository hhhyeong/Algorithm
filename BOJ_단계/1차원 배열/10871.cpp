#include<iostream>

using namespace std;

int main() {
    int N, X;
    int A[10000];
    
    cin >> N >> X;

    // 배열 A 입력받기
    for (int i=0; i<N; i++) {
        cin >> A[i];
        if (X > A[i]){
            cout << A[i] << ' ';
        }
    }

}