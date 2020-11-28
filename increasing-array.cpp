#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	long long steps = 0;
	cin >> n;
	long long int x[n];
	for (int i = 0; i < n; ++i){
		cin >> x[i];
	}
	
	for (int i = 0; i < n - 1; ++i){
		if (x[i] > x[i+1]){
			steps += x[i] - x[i+1];
			x[i+1] += x[i] - x[i+1];
		}
	}	
	
	cout << steps;
    return 0;
}
