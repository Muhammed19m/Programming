#include <iostream>
using namespace std;
int main()
{
    double a, c;
    int n;
    cin >> a >> n;
    c = a;
    n -= 1;
    if (n == 0) { cout << 1; }
    else {
        while (n != 0) {
            a = a * c;
            n--;

        }
        cout << a;
    }
}
