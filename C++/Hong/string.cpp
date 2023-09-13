#include <bits/stdc++.h>
using namespace std;
// const -> 값을 바꾸지 X
const int kMaxStr = 100; // 전역변수(상수 100)
// 문자열을 매개변수로 넣기
// 여기서는 모든 문자열 배열의 길이가 동일하다고 가정
bool IsEqual(const char str1[], const char str2[]) {
    // 크기 출력 확인(배열 크기가 아님.) 문자열의 길이를 별도로 지정해야 합니다.
    // cout << sizeof(str1) << " " << sizeof(str2) << " " << '\n';
    // exit(-1);

    // 힌트 : ==, !- 값지 않다 비교 연산자
    // 힌트 : 문자열 종료 조건
    // 디버깅 힌트 : 문자를 정수로 바꿔서 출력해보기

    for (int i = 0; i < kMaxStr; i++)
    {
        cout << int(str1[i]) << " " << int(str2[i]) << '\n';

        // ==, !- 값지 않다 비교 연산자
        if (str1[i] != str2[i])
            return false;
        // 문자열 종료 조건
        if (str1[i] == '\0')
            return true; 
    }
    return true;
}
int main() {
    // 영어 사용이 디버깅에 유리
    const char str1[kMaxStr] = "stop";

    while (true)
    {
        char str2[kMaxStr];
        cin >> str2;

        if (IsEqual(str1,str2))
        {
            cout << "종료합니다." << '\n';
            break;
        } else
        {
            cout << "계속합니다." << '\n';
        }
    }
    return 0;
}