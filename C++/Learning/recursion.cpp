#include <bits/stdc++.h>
using namespace std;
// factorial
int fact(int n) {
    // 기저사례
    if (n == 1 || n == 0)
        return 1;
    return n * fact(n - 1);
}
int fact1(int n) {
    int ret = 1;
    for (int i = 1; i <= n; i++)
    {
        ret *= i;
    }
    return ret;
}
// 피보나치 수열
int fibo(int n) {
    // cout << "fifo : " << n << '\n';
    if (n == 0 || n == 1)
        return n;
    return fibo(n - 1) + fibo(n - 2);
}
int n = 4;
int main() {
    cout << fact(n) << " " << fact1(n) << " " << fibo(n) << '\n';
    return 0;
}