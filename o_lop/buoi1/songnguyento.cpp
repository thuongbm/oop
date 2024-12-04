#include <bits/stdc++.h>
using namespace std;
bool check(int n){
	if (n == 0 || n == 1 ){
		return false;
	}
	else {
		for (int i = 2; i < sqrt(n); i++){
			if (n % i != 0 ) return false;
		}
	}
	return true;
}
main(){
	int n;
	cin >> n;
	if ( check(n) ) cout << "yes";
	else cout << "no";
}
