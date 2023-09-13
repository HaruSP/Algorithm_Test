#include <bits/stdc++.h>
using namespace std;
int main() {
    // 난수 생성
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1,99); // [1, 99]

    int number = distrib(gen);

    while (true)
    {
        int guess;
        cout << "입력: ";
        cin >> guess;

        if (number == guess)
        {
            cout << "정답입니다." << '\n';
            break;
        } else if (number < guess)
        {
            cout << "숫자가 큽니다." << '\n';
        } else 
        {
            cout << "숫자가 작습니다." << '\n';
        }
    }
    cout << '\n';
    return 0;
}