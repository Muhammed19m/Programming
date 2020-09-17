
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    a = a - b;
    b = b + a;
    a = b - a;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;


// второй способ
// int = t;
// t = a;
// a = b;
// b = t;


}
