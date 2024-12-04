#include <bits/stdc++.h>
using namespace std;
using ll = long long;
class Vector{
private:
	int size;
	float *data;
public:
	Vector (int n, float d = 0){
		size = n;
		data = new float [size];
		for (int i = 0 ; i < n ; i++){
			data[i] = d;
		}
	}
	Vector(const Vector &v){
		this->size = v.size;
		data = new float [v.size];
		for (int i = 0 ; i < v.size ; i++){
			data[i] = this->data[i];
		}
	}
	~Vector();
	Vector operator + (Vector v);
	Vector& operator = (Vector& v);
	bool operator == (Vector v);
	float operator [] (int pos);
	friend istream& operator >> (istream& in, Vector& v);
	friend ostream& operator << (ostream& out, Vector& v);
};
Vector::~Vector(){
	delete[] data;
}
Vector Vector::operator + (Vector v){
	Vector v1(size, 0);
	v1.size = max(this->size, v.size);
	for (int i = 0 ; i < v1.size ; i++){
		v1.data[i] = this->data[i] + v.data[i];
	}
	return v1;
}
Vector& Vector::operator = (Vector &v){
	if (this != &v){
		delete[] data;
		size = v.size;
		data = new float [size];
		for (int i = 0 ; i < size ; i++){
			data[i] = v.data[i];
		}
	}
	return *this;
}
bool Vector::operator == (Vector v){
	if (size != v.size) return false;
	for (int i = 0 ; i < size ; i++){
		if (this->data[i] != v.data[i]) return false;
	}
	return true;
}
float Vector::operator [] (int pos){
	if (pos >= 0 && pos < size){
		return data[pos];
	}
	throw out_of_range("Index out of range");
}
istream& operator >> (istream& in, Vector& v){
	in >> v.size;
	v.data = new float(v.size);
	for (int i = 0 ; i < v.size ; i++){
		cin >> v.data[i];
	}
	return in;
}
ostream& operator << (ostream& out, Vector& v){
	for (int i = 0 ; i < v.size ; i++){
		out << v.data[i] << ' ';
	}
	return out;
}
main(){
	Vector v1(3, 2.5), v2(4, 1.5);  
    cout << "v1: " << v1 << endl;

    if (v1 == v2) {
        cout << "v1 va v2 bang nhau\n";
    } else {
        cout << "v1 va v2 khong bang nhau\n";
    }
	cout << v1[2] << endl;
    Vector v3(2);  
    cout << "Nhap gia tri cho v3: ";
    cin >> v3;
    cout << "v3: " << v3 << endl;

}


