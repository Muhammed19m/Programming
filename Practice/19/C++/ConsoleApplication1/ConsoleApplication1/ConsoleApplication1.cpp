#include <iostream>
#include <vector>
#include <string>
using namespace std;

string upend(string str)
{
	string result = "";
	short len = str.length()-1;
	while (len != -1)
	{
		result += str[len];
		len -= 1;
	}
	return result;
}


int main() {
	int n, lk;
	string k;
	cout << "n: ";
	cin >> n;
	cout << "k: ";
	cin >> k;
	lk = k.length();
	vector<string> num_el;
	int di = pow(lk, n);
	for (int mm = 0; mm < lk; mm++) {
		num_el.push_back(to_string(mm));
	}	int i = 0;

	

	

	while (i < di)
	{
		int el_lis = i;
		string res = "";
		while (el_lis != 0)
		{
			res += to_string(el_lis%lk);
			el_lis /= lk;
		}
		res = upend(res);
		int lr = res.length();
		if (lr != n)
		{
			string moment = res;
			res = "";
			for (int l = 0; l < (n - lr); l++)
			{
				res += "0";
			}
			res += moment;

		}
		cout << res<<"   ";
		int r = 1;

		for (int j = 0; j < num_el.size(); j++)
		{
			string self = num_el.at(j);
			bool hav = false;
	
			int k = 0;
			while (k < res.length())
			{
				cout << res[k]<< "  -  "<<self;
				if (self == res[k]) hav = true;
				k++;
			}
			


			if (hav) r *= 1;
			else r *= 0;
		}
		if (r == 1)
		{
			string end = "";
			for (int j = 0; j < res.length(); j++)
				end += k[int(res[j])];
			cout << end << " ";

		}


		i++;


	}
	cout << i;
	int l;
	cin >> l;
}