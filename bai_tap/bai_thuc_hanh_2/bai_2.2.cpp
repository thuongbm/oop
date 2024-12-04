#include <bits/stdc++.h>
using namespace std;
using ll = long long;
class rect{
private:
	float x, y;
public:
	rect(){
		x = 0;
		y = 0;
	}	
	void input(){
		cin >> x >> y;
	}
	bool check(){
		return x == y;
	}
	float area() const{
		return x * y;
	}
};
main(){
	int n;
	cin >> n;
	vector <rect> r(n);
	for (int i = 0 ; i < n ; i++){
		r[i].input();
	}
	auto max_rect = max_element(r.begin(), r.end(), [] (const rect &a, const rect &b){
		return a.area() < b.area();
	});
	int index = distance(r.begin(), max_rect);
	cout << "hinh chu nhat co dien tich lon nhat la: " << index ;
}


