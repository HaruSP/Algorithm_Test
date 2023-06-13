#include <bits/stdc++.h>
using namespace std;
int main() {
	int hour, min; // ½Ã, ºÐ 
	cin >> hour >> min;
	if (min < 45) {
		min = min + 15;
		hour = hour - 1;
		if (hour < 0) {
			hour = 23;
		}
	} else {
		min = min - 45;
	}
	cout << hour << ' ' << min << '\n';
}
