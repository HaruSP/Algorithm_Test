#include <bits/stdc++.h>
using namespace std;
int x, y; 
int main(){
	cin >> x >> y;
	// x 가 양수 일때, 1사분면 or 4사분면 
	if (x > 0) {
		if (y > 0) {
			cout << 1;
		} else {
			cout << 4;
		}
	// x 가 음수 일때, 2사분면 or 3사분면 
	} else {
		if (y > 0) {
			cout << 2;
		} else {
			cout << 3;
		}
	}
	return 0;
}

