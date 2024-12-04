#include <bits/stdc++.h>
using namespace std;
class Hang{
    string maHang, tenHang;
    int soLuong;
    int gia;
    public:
        void in(){
            cin.ignore();
            getline(cin, maHang);
            getline(cin, tenHang);
            cin >> soLuong >> gia;
        }
        void out(){
            cout << maHang << ' ' << tenHang << ' ' << soLuong << ' ' << gia << ' ';
        }
        string getName(){
            return tenHang;
        }
};
class MayGiat : public Hang{
    float KhoiLuong;
    public:
        void input(){
            Hang::in();
            cin >> KhoiLuong;
        }
        void output(){
            Hang::out();
            cout << KhoiLuong << endl;
        }
        void Find(string x){
            if (x == Hang::getName()){
                output();
            }
        }
        void List(float x){
            if(x == KhoiLuong){
                output();
            }
        }
};
int main(){
    int n;
    cin >> n;
    vector <MayGiat> v;
    v.resize(n);
    for (int i = 0 ; i < n ; i++){
        v[i].input();
    }
    cin.ignore();
    string x;
    getline(cin, x);
    for (auto y : v){
        y.Find(x);
    }
    float a;
    cin >> a;
    for (auto y : v){
        y.List(a);
    }
}