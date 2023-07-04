#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if ((a > 0 && b > 0 && c > 0) && ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))) {
        cout << "Isosceles triangle";
    }
    else if ((a > 0 && b > 0 && c > 0) && (a == b && a == c)) {
        cout << "equilateral triangle";
    }
    else if (((a > 0 && b > 0 && c > 0) && (a != b && a != c))) {
        cout << "triangle versatile";
    }
    else if ((a < 0) || (b < 0) || (c < 0)) {
        cout << "Data entry error";
    }
    return 0;
}