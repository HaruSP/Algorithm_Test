#include <bits/stdc++.h>
using namespace std;
class MyClass 
{
public:
    MyClass()
    {
        // 호출 시점 확인
        cout << "MyClass()" << '\n';
        cout << "this " << this << '\n';
    }

    MyClass(int number) // init_str이 유요한 메모리
    {
        cout << "MyClass(int number)" << '\n';

        // this pointer 소개 // 멤버 함수가 실행이 될때 어떤 인스턴스에 대해서 실행이 되는지 확인가능 
        this->number_ = number;
        cout << "this " << this << '\n';
    }

    // 소멸자
    ~MyClass()
    {
        // 호출 시점 확인
        cout << "~MyClass()" << '\n';
    }

    void Increment(int a)
    {
        number_ += a;
    }

    void Print()
    {
        // 멤버변수는 끝에 _ (google 방식)
        cout << number_ << '\n';
    }
private:
    int number_ = 0; // 초기값
};
int main() {
    MyClass my_class1;
    MyClass my_class2(123);

    cout << &my_class1 << '\n';
    cout << &my_class2 << '\n';

    my_class1.Print();
    my_class2.Print();

    my_class1.Increment(1);
    my_class1.Print();

    // 배열 사용 가능
    // 포인터 사용 가능 (->)

    return 0;
}