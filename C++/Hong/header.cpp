#include <bits/stdc++.h>
using namespace std;
class MyString
{
public:
    MyString(const char *init_str)
    {
        cout << "MyString(const char *init_str)" << '\n';

        // 1. 글자 수 먼저 확인
        size_ = 0;
        while (init_str[size_] != '\0')
        {
            size_++;
        }

        // 2. 글자 수 0이 아니면 메모리 할당
        if (size_ > 0)
        {
            str_ = new char[size_];
        }

        // 3. 복사
        for (int i = 0; i < size_; i++)
        {
            // size를 알고 있기 때문에 null은 복사X
            str_[i] = init_str[i];
        }
        // memcpy() 사용 가능
    }

    ~MyString()
    {
        // 호출 시점 확인
        cout << "Destructor" << '\n';

        size_ = 0;
        if (str_)
            delete[] str_;
    }

    void Resize(int new_size)
    {
        char *new_str = new char[new_size];

        // memcpy() 사용 가능
        for (int i = 0; i < (new_size < size_ ? new_size : size_); i++)
        {
            new_str[i] = str_[i];
        }

        delete[] str_;
        str_ = new_str;
        size_ = new_size;
    }

    void Print()
    {
        for (int i = 0; i < size_; i++)
        {
            // nul char이 없이 때문에 인덱스 하나씩 출력
            cout << str_[i];
        }
        cout << '\n';
    }

    void Append(MyString *app_str)
    {
        int old_size = size_;

        // 다른 멤버 함수 호출 가능
        Resize(size_ + app_str->size_);

        // 중요 개념
        for (int i = old_size; i < size_; i++)
        {
            cout << i << " " << i - old_size << '\n';
            str_[i] = app_str->str_[i - old_size];
        }
    }
private:
    int size_ = 0; // 초기값
    char *str_ = nullptr;
};
int main() {
    MyString str1("ABCDE"); // 생성자 이용
    MyString str2("123");

    str1.Print();

    str1.Append(&str2); // 주소 넣어줌

    // 여기까지만 실행 후 스탑
    exit(-1);

    str1.Print();

    str1.Append(&str2); // 주소 넣어줌

    str1.Print();

    MyString str3("Hello, World!");

    str3.Append(&str1);
    str3.Print();

    return 0;
}