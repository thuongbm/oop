#include <bits/stdc++.h>
using namespace std;
class Ds_nguyen{
    int n;
    vector <int> v;
    public:
        friend istream& operator >> (istream& in, Ds_nguyen &d){
            in >> d.n;
            if (d.n == 0) return in;
            d.v.resize(d.n);
            for (int i = 0 ; i < d.n ; i ++){
                in >> d.v[i];
            }
            return in;
        }
        float average(){
            if (n == 0) return 0;
            int cnt = 0;
            float sum = 0;
            for (int i = 0 ; i < n ; i++){
                if (v[i] > 0){
                    sum += v[i];
                    cnt++;
                } 
            }
            return cnt > 0 ? sum / cnt : 0;
        }
        bool check(int x){
            int can = sqrt(x);
            if (can * can == x) return true;
            return false;
        }
        int count(){
            int cnt = 0;
            for (auto x : v){
                if (check(x)) cnt++; 
            }
            return cnt;
        }
        void xuatKetQua() {
        cout << "trung binh cong cac phan tu duong: " << average() << endl;
        cout << "So phan tu la so chinh phuong: " << count() << endl;
    }
};
int main(){
    Ds_nguyen ds;
    cin >> ds;       
    ds.xuatKetQua(); 
}