#include <bits/stdc++.h>
using namespace std;
using ll = long long;
class polynomial{
private:
	int x;
	vector <int> v;
public:
	polynomial (){
		
	}
	polynomial (const polynomial &p){
		this->x = p.x;
		this->v = p.v;
	}
	friend istream& operator >> (istream& in, polynomial &p);
	friend ostream& operator << (ostream& out, polynomial &p);
	polynomial operator + (polynomial p);
};
polynomial polynomial::operator + (polynomial p){
	polynomial q;
	q.x = max(this->x, p.x);
	q.v.resize(q.x);
	for (int i = 0 ; i < q.x ; i++){
		q.v[i] = this->v[i] + p.v[i];
	}
	return q;
}
istream& operator >> (istream& in, polynomial &p){
	in >> p.x;
	p.v.resize(p.x);
	for (int i = 0 ; i < p.x ; i++){
		in >> p.v[i];
	}
	return in;
}
ostream& operator << (ostream& out, polynomial &p){
	for (int i = 0 ; i < p.x ; i++){
		out << p.v[i] << ' ';
	}
	return out;
}

main(){
	polynomial p, p2;
	cin >> p;
	cout << p;
	cin >> p2;
	polynomial sum = p + p2;
	cout << sum;
}


