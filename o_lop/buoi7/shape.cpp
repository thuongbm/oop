#include <bits/stdc++.h>
using namespace std;
using ll = long long;
class shape{
protected:
	float x, y;
public:
	friend  istream& operator >> (istream &in, shape& a);
	friend  ostream& operator << (ostream &out, shape& a);
};
istream& operator >> (istream &in, shape &a){
	in >> a.x >> a.y;
	return in;
}
ostream& operator << (ostream &out, shape &a){
	out << a.x <<' ' << a.y << endl;
	return out;
}
class rectange : public shape{
public:
	float area(){
		return x * y;
	}
};
main(){
	rectange r;
	cin >> r;
	cout << r.area();
	
}


