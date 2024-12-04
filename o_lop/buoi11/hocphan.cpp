#include <bits/stdc++.h>
using namespace std;
using ll = long long;
class mon{
protected:
	int ma_mon;
	string ten_mon;
	int so_tin;
public:
	friend istream& operator >> (istream& in, mon& m){
		in >> m.ma_mon;
		getline(in, m.ten_mon);
		in >> m.so_tin;
		return in;
	} 
	friend ostream& operator << (ostream& out, mon& m){
		out << m.ma_mon << ' ' << m.ten_mon << ' ' << m.so_tin << endl;
	}
};
class dk{
	int msv;
	string ten;
	mon *m = new mon;
public:
	friend istream& operator >> (istream& in, dk& d){
		in >> d.msv;
		getline(in, d.ten);
		int somon;
		in >> somon;
		for (int i = 0 ; i < somon ; i++){
			in >> d.m[i];
		}
		return in;
	}
	int sotin(){
		for (auto x : )
	}
};
main(){

}


