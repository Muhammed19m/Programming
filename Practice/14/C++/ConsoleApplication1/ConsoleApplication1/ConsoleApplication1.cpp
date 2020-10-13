#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    long n;
    cin >> n;
    if (n > 0) { cout << int(log2(n)) + 1; }
    else {cout<<0;
    }
}
