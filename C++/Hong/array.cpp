#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a = 1;
    int b = 2;
    int c = 3;

    // 같은 자료형의 데이터를 저장하기 위해 메모리를 미리 잡아놓은 
    int my_array[3] = {1, 2, 3};

    // 인덱싱(zero-based)
    cout << my_array[0] << " "
         << my_array[1] << " "
         << my_array[2] << '\n';

    char name[14] = "Hello, World!"; // 마지막에 Null 포함이므로 14 bytes

    cout << name << " " << sizeof(name) << '\n'; // 75

    name[10] = 'A';
    name[11] = 'B';
    name[12] = 'c';

    cout << name << '\n';

    name[2] = '\0';

    cout << name << '\n'; // null을 만나면 중단
    
    return 0;
}