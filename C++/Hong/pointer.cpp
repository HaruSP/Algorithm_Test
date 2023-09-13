#include <bits/stdc++.h>
using namespace std;
int main() {
    int a = 123;

    // address of 주소 연산자 & ampersand
    cout << a << " " << &a << '\n';

    // 참고: 파이썬 id()와 비교
    int *b = &a; // b에 a의 주소 대입

    // deference operator(역참조 연산자)
    cout << b << " " << *b << '\n';

    *b = 567;

    cout << a << " " << b << " " << *b << '\n';

    // 포인터 자체의 주소 크기와 자료형의 크기(주소의 크기는 항상 동일)
    double *c = 0; //아무 주소도 가리키고 있지 않다는 의미로 초기화

    cout << sizeof(int) << " " << sizeof(double) << '\n'; // 4 8
    cout << sizeof(int *) << " " << sizeof(double *) << '\n'; // 4 8
    cout << sizeof(b) << " " << sizeof(c) << '\n'; 

    // 포인터 연산과 배열
    cout << sizeof(size_t) << '\n';
    // size_t (10진수로 변환 용도)
    cout << size_t(b) << " " << size_t(b + 1) << " " << size_t(b + 2) << '\n';
    cout << size_t(c) << " " << size_t(c + 1) << " " << size_t(c + 2) << '\n';

    // 문자열, 배열 연결시키지
    int my_array[] = {23,38,56,69,74};

    char my_str[] = {'h','e','l','l','o','\n'};

    char *ptr = my_str; // 배열의 이름은 포인터

    cout << *(ptr + 3) << '\n';
    cout << ptr[3] << '\n';
    return 0;
}