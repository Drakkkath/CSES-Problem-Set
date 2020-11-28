#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n;
	cin >> n;
	if (n == 1){
		cout << n;
	}
	else if (n == 4){
		cout << 2 << " " << 4 << " " << 1 << " " << 3;
	}
	else if (n < 4) 
		cout << "NO SOLUTION";
	else{
		if (n%2 == 0){
			int a = n;
			while (a != 0){
				cout << a << " ";
				a -= 2;
			}
			a = n - 1;
			while (a != -1){
				cout << a << " ";
				a -= 2;
			}
		}
		else{
			int a = n;
			while (a != -1){
				cout << a << " ";
				a -= 2;
			}
			a = n - 1;
			while (a != 0){
				cout << a << " ";
				a -= 2;
			}
		}
	}
    return 0;
}
