#include <bits/stdc++.h>
using namespace std;
using ll = long long;
class dathuc{
	int n;
	vector <int> v;
public:
	friend istream& operator >> (istream& in, dathuc &d){
		cin >> d.n;
		d.v.resize(d.n);
		int x;
		for (int i = 1 ; i <= d.n ; i++){
			in >> d.v[i];
		}
		return in;
	} 
	friend ostream& operator << (ostream& out, dathuc &d){
		for (auto a : d.v){
			out << a << ' ';
		}
		return out;
	}
	int value (int x){
		int sum = 0;
		for (int i = 1 ; i <=  n ; i++){
			sum += v[i] * pow (x, n);
		}
		return sum;
	}
	int daoham(int x){
		int sum = 0;
		for (int i = 0 ; i <= n ; i++){
			sum += i * v[i] * pow (x, i -  1);
		}
		return sum;
	}
};
main(){
	dathuc d;
	cin >> d;
	cout << d;
	int a = d.value(3);
	cout << a;
	a = d.daoham(3);
	cout << "\n" << a; 
}


