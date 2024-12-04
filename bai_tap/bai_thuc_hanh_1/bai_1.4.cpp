#include <bits/stdc++.h>
using namespace std;
using ll = long long;
class point{
private:
	float x,y;
public:
	void input(){
		cin >> x >> y;
	}
	void output(){
		cout << "(" << x << ', ' << y << ')';
	}
	float distance(const point p)const{
		return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
	}
	friend float area(float a, float b, float c);
};
float area(float a, float b, float c){
	float d = a + b + c;
	return (sqrt(d * ( d - a) * (d - b) * (d - c)));
}
main(){

}


