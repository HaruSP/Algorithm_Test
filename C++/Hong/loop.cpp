#include <bits/stdc++.h>
using namespace std;
int main() {
    for (int i = 0; i < 10; i++)
    {
        cout << i << " ";
    }
    cout << '\n';

    // 배열 데이터 출력 연습 문제로 제공
    // 힌트 sizeof(my_array)
    int my_array[] = {1,2,3,4,5,4,3,2,1};
    for (int i = 0; i < sizeof(my_array) / sizeof(int); i++)
    {
        cout << my_array[i] << " ";
    }
    cout << '\n';

    // 문자열 출력
    char my_string[] = "Hello\0, World!";
    // for (int i = 0; i < sizeof(my_string); i++)
    // {
    //     if (my_string[i] == '\0')
    //         break;

    //     cout << my_string[i];
    // }
    // cout << '\n';

    // for (int i = 0; my_string[i] != '\n'; i++)
    // {
    //     cout << i << " " << my_string[i] << '\n';
    // }
    // cout << '\n';

    // while 기본 예제
    int i = 0;
    // while (i < 10)
    // {
    //     cout << i << " ";
    // }
    // cout << '\n';

    // while (true)
    // {
    //     cout << i << " ";
    //     i++;
    //     if (i >= 10)
    //         break;
    // }
    // cout << '\n';

    while (i < sizeof(my_string) && my_string[i] != '\0')
    {
        cout << my_string[i];
        i++;
    }
    cout << '\n';
    return 0;
}