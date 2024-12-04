#include <bits/stdc++.h>
using namespace std;
class MonHoc{
    string MaMon, TenMon;
    int soTin;
    public:
        MonHoc(){
            MaMon = "";
            TenMon = "";
            soTin = 0;
        }
        void in(){
            cin.ignore();
            getline(cin, MaMon);
            getline(cin, TenMon);
            cin >> soTin;
        }
        void out(){
            cout << MaMon << ' ' <<  TenMon << ' ' << soTin << ' ';
        }
        int getSoTin(){
            return soTin;
        }
        string getMaMon(){
            return MaMon;
        }
};
class Dkhp{
    string Msv, Tsv;
    vector <MonHoc> m;
    public:
        void input(){
            int n;
            cin >> n;
            m.resize(n);
            for (auto &x : m){
                x.in();
            }
            cin.ignore();
            getline(cin, Msv);
            getline(cin, Tsv);
        }
        void output(){
            for (auto &x : m){
                x.out();
                cout << Tsv << ' ' << Msv << endl;
            }
        }
        int soTin(){
            int cnt = 0;
            for (auto x : m){
                cnt += x.getSoTin();
            }
            return cnt;
        }
        void thongKe(string y){
            for (auto x : m){
                if (x.getMaMon() == y){
                    cout << Tsv << ' ' << Msv << endl;
                }
            }
        }
};
int main(){
     vector<Dkhp> danhSachSinhVien;
    int n;

    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    danhSachSinhVien.resize(n);

    for (int i = 0; i < n; ++i) {
        cout << "Nhap thong tin sinh vien thu " << i + 1 << ":\n";
        danhSachSinhVien[i].input();
    }

    cout << "\nThong tin chi tiet cua tat ca sinh vien:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Sinh vien thu " << i + 1 << ":\n";
        danhSachSinhVien[i].output();
    }

    cout << "\nTong so tin chi cua tat ca sinh vien:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Sinh vien thu " << i + 1 << ": " << danhSachSinhVien[i].soTin() << " tin chi\n";
    }

    string maMonCanThongKe;
    cout << "\nNhap ma mon hoc can thong ke: ";
    cin >> maMonCanThongKe;

    cout << "\nDanh sach sinh vien dang ky mon hoc " << maMonCanThongKe << ":\n";
    for (int i = 0; i < n; ++i) {
        danhSachSinhVien[i].thongKe(maMonCanThongKe);
    }

    return 0;
}