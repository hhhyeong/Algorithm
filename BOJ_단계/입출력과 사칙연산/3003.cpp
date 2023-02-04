#include<iostream>
#include<string>

using namespace std;


// C++에는 split()함수가 없구나..
/*
int main() {
    string str;
    str = split(str);
    cin >> str;

    for (int i=0; i< str.length; str.split()
    cout <<     
}
*/


// 숫자 배열로 input값 입력 받기
/*
int main() {
    int chess[6] = {1,1,2,2,2,8};
    int input[6];

    for (int i=0; i<6; i++) {
        cin >> input[i];
    }

    for (int i=0; i<6; i++) {
        cout << chess[i] - input[i] << " ";
    }
}
*/


// int 변수 한개씩 입력받기
int main() {
    int king=1, queen=1, look=2, bishop=2, night=2, phone=8;
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;

    cout << king-a << " " << queen - b << " " << look-c << " " << bishop-d << " " << night-e << " " << phone - f;
}