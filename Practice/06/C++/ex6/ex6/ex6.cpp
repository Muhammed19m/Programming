#include <iostream>
using namespace std;

int main()
{   setlocale(LC_ALL, "Rus");
    float a, b, c;
    cin >> a; 
    cin >> b; 
    cin >> c; 
    if (!(a == 0)) {
        float D;
        D = b * b - 4 * a * c;
        if (D > 0) {
            float x1, x2;
            x1 = (-b + pow(D, 1 / 2)) / (2*a);
            x2 = (-b - pow(D, 1 / 2)) / (2*a);
            cout << "x1 = " << x1 << "\nx2 = " << x2;
        }
        if (D == 0) {
            float x;
            x = (-b) / (2*a);
            cout << "x = " << x;
        }
        if (D < 0) { cout << "Действительного корня нету"; }
    }
    if (a == 0 && b != 0) {
        float x;
        x = (-c) / b;
        cout << "x = " << x;
    }
    else { cout << "Действительного корня нету"; }











}
