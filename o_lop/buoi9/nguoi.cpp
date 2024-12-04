#include <bits/stdc++.h>
using namespace std;
class person{
private:
	string name;
	int age;
public:
	void input(){
		cin >> name >> age;
	}
	void ouput(){
		cout << name << ' ' << age;
	}
};
class player: public person{
private:
	int goal;
	int minu;
public:
	void input(){
		person::input();
		cin >> goal >> minu;
	}
};
int main(){
	int n;
	cin >> n;
	player *p = new player[n];
	for (int i = 0 ; i < n ; i++){
		p[i].input();
	}
}
