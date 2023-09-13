#include <bits/stdc++.h>
using namespace std;
const int kMaxStr = 100; //  전역 상수
int Min(int a, int b) {
    return a < b ? a : b;
}
int main() {
    // 문자열 복사(정적) - Stack
    char str1[] = "Hello, World!";
    char str2[kMaxStr];
    // str2 = str1 -- Error

    // dest, src (복사할 메모리 크기 주의)
    memcpy(str2,str1,Min(sizeof(str1),sizeof(str2)));
    cout << str2 << '\n'; // Hello, World!

    // 문자열 복사(동적) - Heap
    // new 로 할당받은 메모리는 종료전 삭제 필요
    // new 로 할당받은 메모리에 다시 할당할 시는 전에 것을 잃어버리므로 전것을 지우고 할당
    char *dynamic_array = new char[kMaxStr];

    memcpy(dynamic_array, str1, kMaxStr);
    cout << dynamic_array << '\n';

    // 동적할당 메모리는 변수 사이즈가 포인터 사이즈(배열 X)
    cout << str1 << " " << str2 << " " << dynamic_array << '\n';
    cout << size_t(str1) << " " << size_t(str2) << " " << size_t(dynamic_array) << '\n';

    delete[] dynamic_array; // 배열 삭제시 -- 운영체제게 배열 크기를 알고있어 삭제시 사이즈를 입력 X
    return 0;
}