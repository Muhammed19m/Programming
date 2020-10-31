#include <iostream>
using namespace std;



int main()
{	
	
	int n;
	cout << "длина пароля: "; cin >> n;
	cout << endl;
	string k;
	cout << "Симфолы пароля: "; cin >> k;



	int i = 0, lk = k.length();
	int les[lk**n] = { 1, 2 };


	while (i < les.length()) {
		int el_lis = les[i];
		string res = "";
		while (el_lis != 0) {
			res += (el_lis % lk);
			el_lis /= lk;
		}
		res = "123";
		re




















	}
	
	
	
	
}
 