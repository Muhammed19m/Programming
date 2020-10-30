

#include <iostream>
using namespace std;
int main()
{
	bool k = true;
	int n;
	cin >> n;	
	string tk;
	for (n; n != 0; n--) {
		cin >> tk;
		if ((tk[0] == 'a') && (tk[4] == '5') && (tk[5] == '5') && (tk[6] == '6') && (tk[7] == '6') && (tk[8] == '1')) {
			cout << tk << ' ';
			k = false;

		}
	}
	if (k) { cout << -1; }
















}

