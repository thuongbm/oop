#include <bits/stdc++.h>
using namespace std;
using ll = long long;
class point{
private: 
	float x;
	float y;
public:
	point();
	point(float x, float y){
		this->x = x;
		this->y = y;
	}
	point(point &p){
		x = p.x;
		y = p.y;
	}
	void display(){
		cout << x << ' ' << y;
	}
};
main(){
	point p(2.3, 5.6);
}


