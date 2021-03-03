#include <iostream>
#include <string>
using namespace std;


string F(long s, long l1, long r1, long l2, long r2, long x1, long x2) {
    if (x1 + r2 < s)
    {
        x2 = r2;
        if (s <= r1 + x2)
            x1 = s - r2;
        else
            return "-1";
    }
    else if (s >= l1 + l2) 
        x2 = s - x1;
    else return "-1";
    return to_string(x1) + " " + to_string(x2);
 
 }
   
int main()
{
    long s, l1, r1, l2, r2, x1, x2;
    cin >> s >> l1 >> r1 >> l2 >> r2;
    x1 = l1;
    x2 = 0;
    cout << F(s, l1, r1, l2, r2, x1, x2);
    
}