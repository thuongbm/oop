#include <bits/stdc++.h>
using namespace std;
using ll = long long;
class cty{
private:
	string ten, ntl;
public:
	cty(){
		ten = '0';
	}
	void input(){
		cin >> ten >> ntl;	
	}
	string getten(){
		return ten;
	}
};
class ctycp : public cty{
private:
	int sltv;
public:
	void input(){
		cty :: input ();
	}
};
class ctyvt : public cty{
private:
	int soto;
public:
	void input(){
		cin >> ten >> ntl >> soto;
	}
};
main(){

}


