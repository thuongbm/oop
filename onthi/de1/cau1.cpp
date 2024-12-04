#include <bits/stdc++.h>
using namespace std;
class Fraction{
    private: 
        int numerator;
        int denomirator;
    public:
        friend istream& operator >> (istream& in, Fraction &f){
            in >> f.numerator >> f.denomirator;
            if (f.denomirator == 0){
                cout << "\nmau khong the bang 0";
                return in;
            }
            int gcd = __gcd(abs(f.numerator), abs(f.denomirator));
            f.numerator /= gcd;
            f.denomirator /= gcd;
            if (f.denomirator < 0){
                f.numerator *= -1;
                f.denomirator *= -1;
            }
            return in;
        }
        friend ostream& operator << (ostream& out, Fraction &f){
            if (f.denomirator == 1 ) out << f.numerator;
            else{
                out << f.numerator << "/" << f.denomirator;
            }
            return out;
        }
        Fraction operator * (Fraction f){
            Fraction f1;
            f1.denomirator = this->denomirator * f.denomirator;
            f1.numerator = this->numerator * f.numerator;
        }
};
int main(){
    Fraction f1, f2;
    cin >> f1 >> f2;
    Fraction f3 = f1 * f2;
    cout << f3;
}