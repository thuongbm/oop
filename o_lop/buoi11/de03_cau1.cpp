#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool cp(int x){
	for (int i = 0 ; i <= x ; i++){
		if ( i * i == x) return true;
	}
	return false;
}
class Ds_nguyen{
private:
	int n;
	vector <int> v;
public:
	friend istream& operator >> (istream& in, Ds_nguyen& d){
		in >> d.n;
		int x;
		for (int i = 0 ; i < d.n ; i++){
			in >> x;
			d.v.push_back(x);
		}
		return in;
	}
	int tbc(){
		int sum = 0;
		int check = 0;
		for (auto x : v){
			if (x % 2 == 0){
				sum += x;
				check++;
			}
		}
		return (float)(sum/check);
	}
	
	int cnt(){
		int count = 0;
		for (auto x : v){
			if (cp(x)) count++;
		}
		return count;
	}	
};
main(){
	Ds_nguyen d;
	cin >> d;
	cout << "\n" << d.tbc();
	cout << "\n" << d.cnt();
}


