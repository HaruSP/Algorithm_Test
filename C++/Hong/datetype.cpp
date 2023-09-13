#include <bits/stdc++.h>
using namespace std;
int main() {
    int i; // 변수 정의
    i = 123; // 변수에 값 지정(객체 레퍼런스 X)

    cout << i << " " << sizeof(i) << '\n';
    cout << sizeof(int) << '\n';
    cout << 123 + 4 << " " << sizeof(123 + 4) << '\n';

    float f = 123.456f;
    double d = 123.456;

    cout << f << " " << sizeof(f) << '\n';
    cout << d << " " << sizeof(d) << '\n';

    char c = 'a';
    char str[] = "Hello, World!"; // std::string

    cout << c << " " << sizeof(c) << '\n';

    // 형변환
    i = 987.654; // double을 int에 강제 저장 -> int 로 저장 형변환X 소숫점은 버림

    cout << "int from double" << i << '\n';

    // i = 987;
    i += 100;
    i++;

    cout << i << '\n';

    // 불리언
    bool is_good = true;
    is_good = false;

    cout << is_good << '\n'; //0

    // is_good = true;
    // cout << is_good << '\n';

    cout << boolalpha << true << '\n'; // true 를 문자로 표시
    cout << is_good << '\n';
    cout << noboolalpha << true << '\n'; // true 를 불리언 값으로 표시

    cout << boolalpha;
    cout << (true && true) << '\n';
    cout << (true || false) << '\n';

    // 비교
    cout << (1 > 3) << '\n';
    cout << (3 == 3) << '\n';
    cout << ('a' != 'c') << '\n';
    cout << ('a' != 'a') << '\n';

    // 영역(scope)
    i = 123;
    {
        i = 345;
        // int i = 345;
        cout << i << '\n';
    }
    cout << i << '\n';

    return 0;
}