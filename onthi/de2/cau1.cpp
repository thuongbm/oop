#include <bits/stdc++.h>
using namespace std;
class dathuc{
    private:
        int n;
        vector <int> hs;
    public:
        dathuc() : n(0) {}
        void input(){
            cin >> n;
            hs.resize(n + 1);
            for (int i = 0 ; i <= n ; i++){
               cin >> hs[i];
            }
        }
        void output(){
            for (int i = 0 ; i <= n ; i++){
                cout << hs[i] << ' ';
            }
        }
        float sum(float x){
            float res = 0;
            for (int i = 0 ; i <= n ; i++){
                res += pow(x, i) * hs[i]; 
            }
            return res;
        }
        float derivative(float x){
            float res = 0;
            for (int i = 1 ; i <= n ; i++){
                res +=  pow(x, i - 1) * hs[i] * i;
            }
            return res;
        }
};
int main(){
    dathuc dt;
    cout << "Nhap da thuc: " << endl;
    dt.input();
    cout << "Da thuc vua nhap: ";
    dt.output();

    float x;
    cout << "Nhap gia tri x: ";
    cin >> x;

    cout << "Gia tri da thuc tai x = " << x << ": " << dt.sum(x) << endl;
    cout << "Dao ham tai x = " << x << ": " << dt.derivative(x) << endl;

    return 0;
}