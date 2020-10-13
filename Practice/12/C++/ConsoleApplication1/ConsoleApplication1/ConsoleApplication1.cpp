#include<iostream>
using namespace std;
int main() {
	long n, s;
	cin >> n;
	s = n - 1;
	while (s!= 0)
	{
		n *= s;
		s--;
	}
	cout << n;
	}