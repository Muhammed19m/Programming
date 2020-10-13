#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	long n;
	cin >> n;
	if (((n % 2) != 0 && (n % 3) != 0 && (n % 5) != 0 && (n % 7) != 0) || ((n == 2) || (n == 3) || (n == 5) || (n == 7))) {
		cout <<"простое" ;
	}
	else { cout << "составное"; }











}