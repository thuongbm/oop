#include <bits/stdc++.h>
using namespace std;
class qlh{
    private:
        string ma_hang;
        string ten_hang;
        string xuat_xu;
        int loai_hang;
    public:
        // friend istream& operator >> (istream& in, qlh& q){
        //     getline(in, q.ma_hang);
        //     getline(in, q.ten_hang);
        //     getline(in, q.xuat_xu);
        //     in >> q.loai_hang;
        //     return in;
        // }
        // friend ostream& operator << (ostream& out, qlh& q){
        //     out << q.ma_hang <<  ' ' << q.ten_hang << ' ' << q.xuat_xu << ' ' << q.loai_hang;
        //     return out;
        // }
        void nhapTt(){
            cin.ignore();
            getline(cin, ma_hang);
            getline(cin, ten_hang);
            getline(cin, xuat_xu);
            cin >> loai_hang;
        }
        void xuatTt(){
            cout << ma_hang <<  ' ' << ten_hang << ' ' << xuat_xu <<  ' ' << loai_hang << ' ';
        }
        string getTen(){
            return ten_hang;
        }
};
class dientu : public qlh{
    private:
        int tgbh;
    public:
        void nhapThongTin(){
            nhapTt();
            cin >> tgbh;
        }
        void xuatThongTin(){
            xuatTt();
            cout << tgbh << endl;
        }
        void thongKe(){
            if (tgbh > 12) xuatThongTin();
        }
        void tim(string name){
            if (getTen() == name) xuatThongTin();
        }
};
int main(){
    int n;
    cin >> n;
    dientu d[n];
    for (int i = 0 ; i < n ; i++){
        d[i].nhapThongTin();
    }
    for(int i = 0 ; i < n ; i++){
        d[i].xuatThongTin();
    }
    for (int i = 0 ; i < n ; i++){
        d[i].thongKe();
    }
    string x;
    getline(cin, x);
    for (int i = 0 ; i < n ; i++){
        d[i].tim(x);
    }
}