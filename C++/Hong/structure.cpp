#include <bits/stdc++.h>
using namespace std;
struct MyStruct {
    int first;
    int second;
    // ... 추가 기능

    int Sum()
    {
        return first + second;
    }
};
int main() {
    // member(.) pperator
    // 구조체 안에 있는 변수를 구조체 멤버 변수라 칭함
    MyStruct a;
    a.first = 123;
    a.second = 456;

    cout << sizeof(a) << '\n'; // sizeof(a) 는 구조체 멤버 변수의 총합보다 크거나 같음

    cout << a.Sum() << '\n'; //579

    // 포인터는 member(->) operator가 화살표
    MyStruct *ptr_a = &a;

    ptr_a->first = -6;

    cout << a.first << " " << a.second << " " << a.Sum() << '\n';

    cout << ptr_a->first << " " << ptr_a->second << " " << ptr_a->Sum() << '\n';

    // 배열도 가능
    MyStruct pairs[10];

    for (int i = 0; i < 10; i++)
    {
        // pairs->first = i; // 주의
        // pairs->second = i * 10;

        pairs[i].first = i;
        pairs[i].second = i * 10;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << pairs[i].Sum() << '\n';
    }

    return 0;
}