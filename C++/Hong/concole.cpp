#include <bits/stdc++.h>
using namespace std;
int main() {
    /// cin은 데이터를 흘려넣는 스트림
    // 그 데이터를 해석하는 것은 자료형
    // 자료형에 따라 알아서 처리해주기 때문에 scanf() 보다 편리

    char user_input[100];

    // cin과 getline의 차이
    /*
    cout << "원하는 문장을 입력해주세요." << '\n';
    cout << "입력: ";

    // cin >> user_input;

    cin.getline(user_input, sizeof(user_input)); // 줄바꿈을 만날때까지 입력

    cout << "메아리: " << user_input << '\n';
    */

   int number = -1;

   cin >> user_input;
//    cin.getline(user_input, sizeof(user_input));
   cin.ignore(100, '\n'); // 100글자까지 입력 받아서 무시 or '\n'이 있으면 그때부터 무시
   // cin.ignore(numeric_limits<streamsize>::max(), '\n') 
   
   cin >> number;

   cout << user_input << " " << number << '\n';
    
    return 0;
}