#include <bits/stdc++.h>
using namespace std;
class rect{
private:
	float width;
	float height;
public:
	void input(){
		cout << "nhap chieu rong: ";
		cin >> width;
		cout << "nhap chieu dai: ";
		cin >> height;
	}
//	rect(float width, float height){
//		this->width = width;
//		this->height = height;
//	}
	void output(){
		cout << setprecision(2) << fixed << width << ' ' << height;
	}
	float area(){
		return width * height;
	}
	bool check() const{
		return width == height;
	}
};
main(){
	rect r;
	r.input();
	r.output();
	cout << r.area();
	int n; 
	cin >> n;
	int cnt = 0;
	float max_sq = 0;
	for (int i = 0 ; i < n ; i++){
		r.input();
		if (r.check()){
			cnt++;
			if (r.area() > max_sq){
				max_sq = r.area();
			}
		}
	}
	cout << cnt << ' ' << max_sq;
}
