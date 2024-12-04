#include <bits/stdc++.h>
using namespace std;
using ll = long long;
class ps{
private:
	int t;
	int mau;
public:
	void nhap();
	void xuat(){
		cout << t << '/' << mau << endl;
	}
	ps nhan(ps p);
};
void ps::nhap(){
	cin >> t >> mau; 
}
ps ps::nhan(ps p){
	ps x;
	x.mau = mau * p.mau;
	x.t = t * p.t;
	return x;
}
main(){
	ps p1, p2, p3;
	p1.nhap();
	p2.nhap();
	p3 = p1.nhan(p2);
	cout << "\ntich 2 phan so la: ";
	p3.xuat();
}


