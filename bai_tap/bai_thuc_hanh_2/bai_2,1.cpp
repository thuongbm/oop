#include <bits/stdc++.h>
using namespace std;
using ll = long long;
class rectange{
private:
	float width, height;
public:
	rectange(){
		width = 0;
		height = 0;
	}
	void input(){
		cin >> width >> height;
	}
	float are(){
		return width * height;
	}
};
bool my(float a, float b){
	return a > b;
}
main(){
	int n;
	cin >> n;
	rectange r[n];
	float m[n];
	for (int i = 0 ; i < n ; i ++){
		r[i].input();
		m[i] = r[i].are();
	}
	cout << *max_element(m, m+n);
	
}


