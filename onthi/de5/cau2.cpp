#include <bits/stdc++.h>
using namespace std;
class Xe{
    string BienSo;
    float TrongLuong;
    public:
        void in(){
            cin.ignore();
            getline(cin, BienSo);
            cin >> TrongLuong;
        }
        float getTrongLuong(){
            return TrongLuong;
        }
        void out(){
            cout << BienSo << setw(20) << TrongLuong << setw(20);
        }
        string getBienSo(){
            return BienSo;
        }
};
class XeBus : public Xe{
    int SoCho;
    public:
        void input(){
           Xe::in();
           cin >> SoCho; 
        }
        void output(){
            Xe::out();
            cout << SoCho << endl;
        }
        bool InXeBus(float x){
            if (x > 3000 && SoCho > 24){
                return true;
            }
            return false;
        }
        bool Tim(string x){
            if (Xe::getBienSo() == x) return true;
            return false;
        }
};
class XeTai : public Xe{
    float TaiTrong;
    public:
        void input(){
            Xe::in();
            cin >> TaiTrong;
        }
        void output(){
            Xe::out();
            cout << TaiTrong;
        }
        bool InXe(float x){
            if (Xe::getTrongLuong() > x && TaiTrong < 15) return true;
            return false;
        }
        bool TimTai(string x){
            if (Xe::getBienSo() == x) return true;
            return false;
        }
};
int main(){
    int m, n;
    cin >> m >> n;
    vector <XeTai> t;
    t.resize(m);
    vector <XeBus> b;
    b.resize(n);
    cout << "Nhap thong tin xe bus" << endl;
    for (int i = 0 ; i < n ; i++){
        b[i].input();
    }
    cout << endl;
    cout << "Nhap thong tin xe tai" << endl;
    for (int i = 0 ; i < m ; i++){
        t[i].input();
    }
    cout << endl;
    int cnt = 0;
    for (auto x : b){
        if (x.InXeBus(3000)){
            cnt++;
        } 
    }
    if (cnt == 0){
        cout << "khong co xe bus nao thoa man dieu kien." << endl;
    }
    else{
        cout << "danh sach cac xe bus thoa man dieu kien la: " << endl;
        for (auto x : b){
            if (x.InXeBus(3000)){
                x.output();
                cout << endl;
            } 
        }
    }
    cnt = 0;
    for (auto x : t){
        if (x.InXe(3000)){
            cnt++;
        } 
    }
    if (cnt == 0){
        cout << "khong co xe tai nao thoa man dieu kien." << endl;
    }
    else{
        cout << "danh sach cac xe tai thoa man dieu kien la: " << endl;
        for (auto x : t){
            if (x.InXe(3000)){
                x.output();
                cout << endl;
            } 
        }
    }
    cnt = 0;
    string y;
    cin >> y;
    for (int i = 0 ; i < n ; i++){
        if (b[i].Tim(y)){
            cnt++;
        }
    }
    if (cnt == 0){
        cout << "Khong co xe bus nao thoa man y/c" << endl;
    }
    else{
        for (auto x : b){
            if (x.Tim(y)){
                x.output();
                cout << endl;
            }
        }
    }
    cnt = 0;
    for (int i = 0 ; i < n ; i++){
        if (t[i].TimTai(y)){
            cnt++;
        }
    }
    if (cnt == 0){
        cout << "Khong co xe tai nao thoa man y/c" << endl;
    }
    else{
        for (auto x : t){
            if (x.TimTai(y)){
                x.output();
                cout << endl;
            }
        }
    }
}