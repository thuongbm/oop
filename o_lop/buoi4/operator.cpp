#include <bits/stdc++.h>
using namespace std;
using ll = long long;
class fraction{
private:
	int x;
	int y;
public:
	void input(){
		cin >> x >> y;
	}
	void output(){
		cout << x << ' ' << y;
	}
	fraction operator + (fraction f);
	fraction operator * (fraction f);
};
fraction fraction :: operator + (fraction f){
	fraction t;
	t.y = y * f.y;
	t.x = x * f.y + y * f.x;
}
fraction fraction :: operator * (fraction f){
	fraction t;
	t.x = x * f.x;
	t.y = y * f.y;
}
main(){
	fraction p, f, u, v;
	
}


