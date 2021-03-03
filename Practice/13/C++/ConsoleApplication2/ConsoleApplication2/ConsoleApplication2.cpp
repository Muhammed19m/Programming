#include <iostream>
#include <math.h>
using namespace std;

bool F(long k)
{
	long squar = sqrt(k)+2;
	for (long i = 2; i < squar; i++)
		if (k % i == 0) return false;
	return true;

}


int main()
{
	setlocale(LC_ALL, "Rus");
	long n;
	cin >> n;
	if (F(n) || ((n == 2) || (n == 3) || (n == 5) || (n == 7))) {
		cout <<"простое" ;
	}
	else { cout << "составное"; }
}