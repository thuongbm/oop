#include <bits/stdc++.h>
using namespace std;
class diem{
    private:
        int x, y;
    public:
        diem(){
            x = 0;
            y = 0;
        }
        friend istream& operator >> (istream& in, diem& d){
            in >> d.x >> d.y;
            return in;
        }
        friend ostream& operator << (ostream& out, diem d){
            out << d.x << ' ' << d.y << endl;
            return out;
        }
        diem operator * (diem d){
            diem res;
            res.x = this->x * d.x;
            res.y = this->y * d.y;
            return res;
        }

};
int main(){
    diem d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    diem temp = d1 * d2;
    diem res = temp * d3;
    cout << res;
    return 0;
}