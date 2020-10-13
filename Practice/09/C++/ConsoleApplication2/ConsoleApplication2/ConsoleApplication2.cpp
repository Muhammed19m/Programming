#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	char c;
	setlocale(LC_ALL, "Rus");
	int p1, p2, c1, c2, t1, t2;
	cin >> p1 >>c>> p2;
	cin >> c1 >>c>> c2;
	t1 = p1 * 60 + p2;
	t2 = c1 * 60 + c2;
	if (t1 < 60) { t1 = t1 + 24 * 60; }
	if (t2 < 60) { t2 = t2 + 24 * 60; }
	if (abs(t1 - t2) <= 15) { cout << "Встреча состоялось"; }
	else { cout << "Встреча не состоялось"; }












}
