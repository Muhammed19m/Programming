#include <iostream>

using namespace std;

int main() {

	double x0, v0, t, a, x;
	cout << "Enter x0, v0, t" << endl;
	cin >> x0 >> v0 >> t;
	a = 9.8;


	x = x0 + v0 * t - (a * t * t) / 2;
	cout << x;


}