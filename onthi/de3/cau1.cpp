#include <bits/stdc++.h>
using namespace std;
class cricle{
    float radius;
    public:
        void input(){
            cin >> radius;
        }
        float area(){
            return M_PI * radius * radius;
        }
    
};
int main(){
    vector<cricle> c;
    int n;
    cout << "Nhap so luong hinh tron: ";
    cin >> n;
    c.resize(n);

    cout << "Nhap ban kinh cac hinh tron:\n";
    for (int i = 0; i < n; i++) {
        c[i].input();
    }

    // Tính tổng diện tích và diện tích lớn nhất
    float sum = 0, maxArea = 0;
    for (auto& x : c) {
        float a = x.area();
        sum += a;
        if (a > maxArea) maxArea = a;
    }

    cout << "Dien tich trung binh cac hinh tron la: ";
    cout << fixed << setprecision(2) << sum / n << endl;

    cout << "Dien tich hinh tron lon nhat la: ";
    cout << fixed << setprecision(2) << maxArea << endl;

    return 0;
}