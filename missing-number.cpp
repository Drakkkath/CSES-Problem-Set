using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

int main(){
	int n, s = 0, a;
	cin >> n;
	for (int i = 0; i < n-1; ++i){
		cin >> a;
		s += a;
	}
	cout << n*(n+1)/2 - s;
	return 0;
}
