#include <iostream>
using namespace std;

class Largest {
private:
    int a, b, m;

public:
    void setdata(int x, int y) {
        a = x;
        b = y;
    }

    friend void find_Max(Largest &obj);

    void display() {
        cout << "The maximum value is: " << m << endl;
    }
};

void find_Max(Largest &obj) {
    if (obj.a > obj.b) {
        obj.m = obj.a;
    } else {
        obj.m = obj.b;
    }
}

int main() {
    Largest obj;
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;
    obj.setdata(a, b);

    find_Max(obj);

    obj.display();

    return 0;
}
