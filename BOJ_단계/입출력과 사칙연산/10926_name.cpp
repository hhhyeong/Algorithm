#include<iostream>
#include<string>

using namespace std;

int main() {
    string name;
    cin >> name;
    // 삼중자 이슈 ! : ?? + 특수문자 => 특정 문자로 치환되기 때문에, c++17버전 이전 환경에서는 ?를 문자그대로 처리하기 위해서 백슬래시(\)를 넣는다.
    // https://st-lab.tistory.com/289
    cout << name + "\?\?!";
}