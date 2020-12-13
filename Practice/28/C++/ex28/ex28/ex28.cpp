#include <iostream>
#include <vector>
#include <string>
using namespace std;

int isMultiply(int k) {
	int i = 2;
	while (k % i != 0 and i < k) i++;
	if (k % i == 0) return i;
	return 0;
}
int count(vector<int> ls, int k) {
	int cont = 0;
	for (int c = 0; c < ls.size(); c++) {
		if (ls[c] == k) cont++;
	}
	return cont;
}
bool IinWas(vector<int> ls, int n) {
	for (int i = 0; i < ls.size(); i++) if (n == ls[i]) return false; return true;
}

void print_factorization(int n) {
	if (n == 1)
		cout << "--";
	else{
		vector<int> result;
		int i = 2;
		while (n % i != 0 and i <= n) i++;
		result.push_back(i);
		result.push_back(n/i);
		while (isMultiply(result[result.size() - 1])) {
			int k = result[result.size()-1];
			result.pop_back();
			int m = isMultiply(k);
			result.push_back(m);
			result.push_back(k/m);
			k = result[result.size() - 1];

		}
		vector<int> was;
		was.push_back(1);
		string res = "";
		for (int i = 0; i<result.size(); i++) {
			int cont = count(result, result[i]);
			if (IinWas(was, result[i]) and cont > 1) {
				res += "*" + to_string(result[i]) + '^' + to_string(cont);
				was.push_back(result[i]);
			}
			else if (cont == 1 and IinWas(was, result[i])) res += "*" + to_string(result[i]);
		}
		string res_end = "";
		for (int k = 1; k < res.length(); k++) res_end += res[k];
		cout << res_end;
		
	}


}


int main()
{
	int n;
	cin >> n;
	print_factorization(n);
}
