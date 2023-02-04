#include<iostream>
using namespace std;

int main() {
    int arr[9][9];
    int max = 0;
    int location_X, location_Y;

    for (int i=0; i<9; i++) {
        for (int j=0; j<9; j++) {
            cin >> arr[i][j];
            if (arr[i][j] >= max){
                max = arr[i][j];
                location_X = i + 1;
                location_Y = j + 1;
            }
        }
    }
    cout << max << endl;
    cout << location_X << " " << location_Y;

}