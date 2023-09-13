#include <bits/stdc++.h>
using namespace std;
// 함수(선언, 정정 분리 가능)
int Add(int a, int b) {
    return a + b;
}
// 반환 자료형이 지정되지 않았음
void Add(int a, int b, int *c) {
    *c = a + b;
}
int main() {
    cout << Add(1,2) << '\n';

    int sum;
    Add(4,5,&sum);

    cout << sum << '\n';

    return 0;
}