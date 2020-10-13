#include <iostream>
#include<cmath>
using namespace std;

int main() {

	double x0, v0, t, a, x, r;
	cout << "Enter x0, v0, t" << endl;
	cin >> x0 >> v0 >> t;
	a = 9.8;
	x = x0 + v0 * t - (a * t * t) / 2;
	r = abs(x0 - x);
	cout << r;


}
