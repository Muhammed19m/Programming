
#include <iostream>
using namespace std;
int a[37];
int main()
{
	int red_d = 0, black_d = 0, x=1, max = 0;
	

	while (x > 0 && x <= 36) {
		cin >> x;
		if (x <= 0 && x>=36) break;
		if (x == 1 or x == 3 or x == 5 or x == 7 or x == 9 or x == 12 or x == 14 or x == 16 or x == 18 or x == 19 or x == 21 or x == 23 or x == 25 or x == 27 or x == 30 or x == 32 or x == 34 or x == 36) {
			red_d++;
		}
		else black_d++;
		a[x]++;
		for (int i = 0; i < 37; i++)
		{
			if (max < a[i]) {
				max = a[i];
			}
		}
		for (int i = 0; i < 37; i++) {
			if (a[i] == max)cout << i << ' ';
		}cout << endl;
		for (int i = 0; i < 37; i++) {
			if (a[i] == 0)
			cout << i << ' ';
		}
		cout << '\n';
		cout << red_d << ' ' << black_d << endl<<endl;

	}



}
