#include <bits/stdc++.h>
using namespace std;
using ll = long long;
class dathuc{
private:
	int n;
	int *a;
public:
	dathuc(int n) {
        this->n = n;
        a = new int[n + 1]; 
    }
	dathuc(const dathuc &d) {
        n = d.n;
        a = new int[n + 1];
        for (int i = 0; i <= n; i++) {
            a[i] = d.a[i];
        }
    }
	void input (){
		for (int i = 0 ; i <= n ; i++){
			cin >> a[i];
		}
	}
	void output(){
		for (int i = 0 ;  i <= n ; i ++){
			cout << a[i];
		}
	}
	int sum(int x){
		int sum = 0;
		for (int i = 0 ; i <= n ; i++){
			sum += a[i] * pow (x, i);
		}
		return sum;
	}
	dathuc operator+(dathuc d){
		int k = max (d.n, n);
		dathuc kq(k);
		for (int i = 0  ; i <= k ; i++){
			kq.a[i] = a[i] + d.a[i];
		}
		return kq;
	}
};
main(){
	dathuc d(3), d1(3);
	d.input();
	d.output();
	d1.input();
	d1.output();
	cout << endl;
	dathuc kq = d1 + d;
	kq.output();
}


