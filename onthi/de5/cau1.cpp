#include <bits/stdc++.h>
using namespace std;
class DaThuc{
    int n;
    vector <float> v;
    public:
        void in(){
            cin >> n;
            v.resize(n + 1);
            for (int i = 0 ; i <= n ; i++){
                cin >> v[i];
            }
        }
        void out(){
            for (auto x : v){
                cout << x << ' ';
            }
        }
        float bieuThuc(float x){
            float sum = 0;
            for (int i = 0 ; i <= n ; i++){
                sum += pow(x, i) * v[i];
            }
            return sum;
        }
};
int main(){
    DaThuc d1, d2;
    d1.in();
    d2.in();
    d1.out();
    cout << endl;
    cout << setprecision(2) << fixed << sqrt(d1.bieuThuc(2) + d2.bieuThuc(3)) <<  endl;
}