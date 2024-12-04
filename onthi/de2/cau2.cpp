#include <bits/stdc++.h>
using namespace std;
class thisinh{
    private:
        string name;
        float math, physic, chemistry; 
    public: 
        void input(){
            cin.ignore(1);
            getline(cin, name);
            cin >> math >> physic >> chemistry; 
        }
        void output(){
            cout << name << ' ' << math << ' ' << physic << ' ' << chemistry << ' ' << setprecision(2) << fixed;
        }
        float getscore(){
            return math + physic + chemistry;
        }
};
class uutien : public thisinh{
    int type;
    public:
        void input(){
            thisinh :: input();
            cin >> type;
        }
        float benchmark(){
            if (type == 1) return (thisinh :: getscore() + 1.5);
            if (type == 2) return (thisinh :: getscore() + 1);
            if (type == 3) return (thisinh :: getscore() + 0.5);
        }
        void output(){
            thisinh :: output();
            cout << type << endl;
        }
        void list(float x){
            if (benchmark() >= x){
                output();
            }
        }
        void thongke(int x){
            if (type == x) output();
        }
    } 
;
int main(){
    int n;
    cout << "Nhap so luong thi sinh: ";
    cin >> n;

    vector<uutien> students(n);

    // Nhập thông tin các thí sinh
    cout << "Nhap thong tin thi sinh:\n";
    for (int i = 0; i < n; i++) {
        students[i].input();
    }

    // Xuất danh sách thí sinh đạt điểm chuẩn
    float x;
    cout << "\nNhap diem chuan: ";
    cin >> x;
    cout << "Danh sach thi sinh dat diem chuan:\n";
    for (int i = 0; i < n; i++) {
        students[i].list(x);
    }

    // Thống kê theo loại ưu tiên
    int type_to_count;
    cout << "\nNhap loai uu tien can thong ke: ";
    cin >> type_to_count;
    cout << "Danh sach thi sinh thuoc loai uu tien " << type_to_count << ":\n";
    for (int i = 0; i < n; i++) {
        students[i].thongke(type_to_count);
    }

    return 0;

}