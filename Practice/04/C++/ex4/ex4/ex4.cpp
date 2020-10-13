
#include <iostream>
using namespace std;
int main()
{
    double a, b;
    cin >> a;
    cin >> b;
    a = a - b;
    b = b + a;
    a = b - a;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;



    double t;
	t = a;
    a = b;
    b = t;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;


}
