#include <iostream>
#include <cmath>
#include "factorial.h"
#include "sin.h"
#include <iomanip>
#include "soch.h"

using namespace std;

double const pi = 3.1415926535;
int main()
{
	cout << "n\tn!"<<endl;
	for (int n = 1; n <= 10; n++) 
		cout << n << '\t' << factorial(n)<<endl;
	cout<<endl<<"x\tsin(x)"<<endl;
	cout<<setprecision(4);
	for (double x = 0; x<pi/4;x+=pi/180)
		cout<<x<<'\t'<<sin(x, 5)<<endl;
	
}
