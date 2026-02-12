#include <iostream>
using namespace std;

class Complex {
    float re, im;

public:
    // Constructor does the addition
    Complex(float a, float b, float c, float d) {
        re = a + c;
        im = b + d;
    }

    void display() {
        cout << re << " + " << im << "i";
    }
};

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    Complex obj(a, b, c, d);  // addition happens here
    obj.display();

    return 0;
}