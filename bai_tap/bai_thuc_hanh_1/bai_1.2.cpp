#include <bits/stdc++.h>
using namespace std;
using ll = long long;
class point{
private:
	float x, y;
public:
	point(double x = 0, double y = 0) : x(x), y(y) {}
	void input(){
		cin >> x >> y;
	}
	float distance(const point p)const{
		return sqrt(pow(x - p.x, 2) + pow(y - p.y,2));
	}
	friend float distance2(point p1, point p2);
};
float distance2(point p1, point p2){
	return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y,2));
}
main(){
	point p;
	p.input();
	point p1(0,0);
	point p2;
	p2.input();
	cout << setprecision(2) << fixed << "\nkhoang cach tu diem den tam toa do la: " << p.distance(p1) << endl;
	cout << setprecision(2) << fixed << p2.distance(p) << endl;
	cout << setprecision(2) << fixed << distance2(p2, p) << endl;
	
}


