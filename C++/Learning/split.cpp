#include <bits/stdc++.h>
using namespace std;
void init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

vector<string> split(string input, string delimiter) {
	vector<string> ret;
	long long pos = 0;
	string token = "";
	while ( (pos = input.find(delimiter)) != string::npos )
	{
		token = input.substr(0, pos);
		ret.push_back(token);
		input.erase(0, pos + delimiter.length());
	}
	ret.push_back(input);
	return ret;
}
int main() {
	init();
	string s = "배가 많이 고프시지 않나요?", d = " ";
	vector<string> a = split(s, d);
	for ( string b : a ) 
		cout << b << '\n';
}
