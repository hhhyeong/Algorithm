#include<iostream>

using namespace std;

int main() {
    int N, M;
    int arrA[100][100];
    int arrB[100][100];

    cin >> N >> M;

    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            cin >> arrA[i][j];
        }
    }
    
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            cin >> arrB[i][j];
        }
    }

    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            cout << arrA[i][j] + arrB[i][j] << " ";
        }
        cout << endl;
    }
}