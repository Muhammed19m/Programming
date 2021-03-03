#include <iostream>
using namespace std;

struct Drink {
	string name;
	long price;
	long v;
};

int main()
{
	int budget, count_drink;
	cin >> budget >> count_drink;
	
	Drink econom;
	Drink moment;
	econom.price = 0;
	bool first = true;

	int m = 0;
	while (m < count_drink) {

		cin >> moment.name >> moment.price >> moment.v;
		
		bool one = true;

		if (budget >= moment.price)
		{
			if ((budget / econom.price * econom.v) < ((budget / moment.price) * moment.v) and  not first) {
					econom.name = moment.name;
					econom.price = moment.price;
					econom.v = moment.v;
			}
			if (first) {
				econom.name = moment.name;
				econom.price = moment.price;
				econom.v = moment.v;
				first = false;
			}	
		}
		m++;
	}
	if (econom.price != 0) {
		cout << endl << econom.name << " " << budget / econom.price << endl;
		cout << (budget / econom.price) * econom.v << endl;
		cout << budget - budget / econom.price;
	}
	else cout << -1;
}

