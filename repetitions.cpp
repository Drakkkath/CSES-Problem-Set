using namespace std;
#include <bits/stdc++.h>

int main(){
	string s;
	cin >> s;
	char x = s[0];
	int ans = 1, rep = 0;
	for (char c: s){
		if (c == x){
			++rep;
			ans = max(ans, rep);
		}
		else{
			x = c;
			rep = 1;
		}
	}
	cout << ans;
	return 0;
}
