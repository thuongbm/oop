#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class stu{
private:
	int id;
	string name;
	float point;
public:
	stu(){
		id = 0;
		name  = "x";
		point  = 0;
	}
	friend istream& operator >> (istream &in, stu& a);
	friend ostream& operator << (ostream &out, stu a);
	bool operator > (stu a);
	string getname(){
		return name;
	}
	float getscore(){
		return point;
	}
};
istream& operator >> (istream &in, stu& a){
	cout << "Nhap ma sinh vien: ";
	in >> a.id;
	cout << "Nhap ten: ";
	in >> a.name;
	cout << "Nhap diem: ";
	in >> a.point;
	return in;
}
ostream& operator << (ostream &out, stu a){
	cout << a.id << ' ' << a.name << ' ' << fixed << setprecision(2) << a.point << endl;
	return out;
}

bool stu::operator >(stu a){
	return this->point > a.point;
} 
class List{
private: 
	vector <stu> s;
public:
	void add(){
		stu a;
		cin >> a; 
		s.push_back(a);
	}
	stu find(string name){
		for (auto x : s){
			if (name == x.getname()){
				return x;
			}
		}
	}
	float maxscore(){
		float max_score = 0;
		for (auto x:s){
			if (max_score < x.getscore()) max_score = x.getscore();
		}
		return max_score;
	}
	void erase_stu(int x){
		s.erase(s.begin()+x);
	}
	void output(){
		for (auto x: s){
			cout << x;
		}
	}
	
};
int main(){
	List l;
	cout << "menu" << endl;
	cout << "0. ket thuc" << endl;
	cout << "1. them sinh vien\n";
	cout << "2. xoa sinh vien\n"; 
	int n;
	do {
		cin >> n;
		if ( n == 1 ) l.add();
		if ( n == 2) l.output();
	}
	while ( n != 0 );
	return 0;
}


