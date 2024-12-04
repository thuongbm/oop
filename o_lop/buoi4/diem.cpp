#include <bits/stdc++.h>
using namespace std;
using ll = long long;
class point{
	private:
		int x;
		int y;
	public:
		void input();
		void output();	
		float distance();
		float distances(const point &p);
};
void point :: input(){
	cin >> x >> y;
}
void point :: output(){
	cout << x << ' ' << y << endl;
}
float point :: distance(){
	return (float)(sqrt (x * x + y * y));
}
float point :: distances(const point &p){
	float k = sqrt (pow (x - p.x , 2) + pow (y - p.y, 2));
	return k;
}
main(){
	point p1, p2;
	p1.input();
	p2.input();
}


