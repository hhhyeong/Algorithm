#include<iostream>

using namespace std;

int main() {
    int N, v;
    int arr[101];
    int count = 0;

    cin >> N;

    // 배열 arr에 원소값 초기화.
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cin >> v;

    for (int i=0; i<N; i++) {
        if (arr[i] == v) {
            count += 1;
        }
    }

    cout << count;
}