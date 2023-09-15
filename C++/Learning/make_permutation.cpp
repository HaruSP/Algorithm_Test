#include <bits/stdc++.h>
using namespace std;
void init() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
vector<int> v;
void printV(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << '\n';
}
void makePermutation(int n, int r, int depth) {
    cout << n << " : " << r << " : " << depth << '\n';
    if (r == depth) {
        printV(v);
        return;
    }
    for (int i = depth; i < n; i++) {
        swap(v[i], v[depth]);
        makePermutation(n, r, depth + 1);
        swap(v[i], v[depth]);
    }
    return;
}

int main() {
    init();
    
    for (int i = 1; i <= 3; i++)
        v.push_back(i);
    
    makePermutation(3, 3, 0);
    return 0;
}