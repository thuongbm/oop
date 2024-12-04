#include <bits/stdc++.h>
using namespace std;
using ll = long long;
class point{
	int x, y;
public:
	point (){
		x = 0;
		y = 0;
	}
	point (int x, int y){
	this->x = x;
	this->y = y;
	}
	float distance(int x, int y){
		return (sqrt(pow(this->x - x, 2) + pow(this->y - y, 2)));
	}
	point operator * (point p);
	friend bool operator == (point p1, point p2);
	friend istream& operator >> (istream& in, point& p1);
	friend ostream& operator << (ostream& out, point& p1);
};
point point::operator * (point p){
	point temp;
	temp.x = p.x * x;
	temp.y = p.y * y;
	return temp;
}
bool operator == (point p1, point p2){
	return p1 == p2;
}
istream& operator >> (istream& in, point &p1){
	in >> p1.x;
	in >> p1.y;
	return in;
}
ostream& operator << (ostream& out, point &p1){
	out << p1.x << ' ' << p1.y;
	return out;
}
main(){
	point p1, p2, p3;
	cin >> p1;
	cin >> p2;
	p1.distance(1,3);
	p3 = p1 * p2;
	cout << p3;
	p3
}


