#include <bits/stdc++.h>
using namespace std;
void init() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int n = 5, k = 3, a[5] = {1, 2, 3, 4, 5};
void print(vector<int> b) {
    for (int i : b)
        cout << i << " ";
    cout << '\n';
}
void combi(int start, vector<int> b) {
    if (b.size() == k) {
        print(b);
        return;
    }
    for (int i = start + 1; i < n; i++) {
        b.push_back(i);
        combi(i, b);
        b.pop_back();
    }
    return;
}
int main() {
    vector<int> b;
    // 재귀 (뽑으려는 수가 4개 이상일 때 권장)
    // combi(-1, b );
    // 중첩 for문 (뽑으려는 수가 3개 이하일 떄 권장)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            for (int k = 0; k < j; k++) {
                cout << i << " : " << j << " : " << k << '\n';
            }
        }
    }
    return 0;
}