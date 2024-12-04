#include <bits/stdc++.h>
using namespace std;

class InventoryManagement {
protected:
    int inventoryNum;
    string name;
    string origin;
    int type;
};

class Electronics : public InventoryManagement {
    int warrantyPeriod;  
public:
    friend istream& operator >> (istream& in, Electronics &e) {
        in >> e.inventoryNum >> e.name >> e.origin >> e.type >> e.warrantyPeriod;
        return in;
    }

    friend ostream& operator << (ostream& out, Electronics &e) {
        out << e.inventoryNum << " " << e.name << " " << e.origin << " " << e.type << " " << e.warrantyPeriod;
        return out;
    }

    // Hàm so sánh
    bool compare(Electronics e) {  
        return this->warrantyPeriod > e.warrantyPeriod;
    }
};

int main() {
    vector<Electronics> list;
    int n;
    cin >> n;

    list.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> list[i];
    }

    for (int i = 0; i < n; i++) {
        cout << list[i] << endl;
    }

    Electronics max = list[0];
    for (int i = 1; i < n; i++) {  
        if (max.compare(list[i])) {
            max = list[i];
        }
    }

    cout << max;
}
