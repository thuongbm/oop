#include <bits/stdc++.h>
using namespace std;
main(){
	for (int i = 10; i <= 40; i += 2){
		float f = i * 1.8 + 32;
		cout << i << ' ' << fixed << setprecision(2) <<  f << endl;
	}
}
