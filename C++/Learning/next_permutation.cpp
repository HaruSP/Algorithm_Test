#include <bits/stdc++.h>
using namespace std;
void init() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main() {
    init();
    // ver 1
    // int a[] = {1, 2, 3};
    // do {
    //     for (int i : a)
    //         cout << i << " ";
    //     cout << '\n';
    // // } while (next_permutation(&a[0], &a[0] + 3));
    // } while (next_permutation(a, a + 3));

    // ver 2
    vector<int> a = {2, 1, 3, 100, 200};
    sort(a.begin(), a.end());
    do {
        // 가장 큰 2개만 뽑을 경우
        for (int i = 0; i < 2; i++)
        {
            cout << a[i] << " "; 
        }
        // for (int i : a)
        //     cout << i << " ";
        cout << '\n';
    } while (next_permutation(a.begin(), a.end()));
}