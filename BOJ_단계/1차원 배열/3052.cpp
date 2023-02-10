// idea)
// 입력받은 숫자를 42로 나눈 나머지를 배열 arr에 저장한다.
// 배열 arr에서 중복을 없앤 배열의 길이를 출력한다.
// 중복 없는 배열을 C++로 구현하는게 point
// #1) C++에서 set 자료구조 사용법???
// #2) 0~41까지의 인덱스 배열에서 존재하면 +1을 하여, 2 이상인 경우, 중복으로 간주하는 방법.!!
//     => 1 이상인 인덱스의 개수 구하기.


#include<iostream>

using namespace std;

int main() {
    int A;
    int rmn;
    int i_arr[42] = {0};
    int count = 0;

    // for (10개의 숫자){
    //     나머지 = 각 숫자 % 42
    //     i_arr[나머지]++;
    // }
    for (int i = 0; i < 10; i++) {
        cin >> A;
        rmn = A % 42;
        i_arr[rmn]++;
    }


    // for (42) {
    //     i_arr[i]의 값이 0이 아닌 경우 count++
    // }
    for (int i = 0; i < 42; i++) {
        if (i_arr[i] != 0) {
            count++;
        }
    }


    // print(count);
    cout << count;

}

