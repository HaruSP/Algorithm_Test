#include <bits/stdc++.h>
using namespace std;
int x, y; 
int main(){
	cin >> x >> y;
	// x �� ��� �϶�, 1��и� or 4��и� 
	if (x > 0) {
		if (y > 0) {
			cout << 1;
		} else {
			cout << 4;
		}
	// x �� ���� �϶�, 2��и� or 3��и� 
	} else {
		if (y > 0) {
			cout << 2;
		} else {
			cout << 3;
		}
	}
	return 0;
}

