#include <bits/stdc++.h>
using namespace std;
using ll = long long;
class diem{
private:
	int x;
	int y;
public:
	void nhap(){
		cin >> x >> y;
	}
	void xuat(){
		cout << '(' << x << ' ' << y << ')' << ' ';
	}
	float kc(diem d1);
};
float diem::kc (diem d1){
	return sqrt(pow(x - d1.x,2) + pow(y - d1.y,2));
} 
main(){
	diem d1, d2, d3;
	float a, b, c;
	d1.nhap();
	d2.nhap();
	d3.nhap();
	a = d1.kc(d2);
	b = d2.kc(d3);
	c = d3.kc(d1);
	cout << a + b +c;
}


