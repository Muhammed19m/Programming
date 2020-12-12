#include <iostream>
#include <vector>
using namespace std;

vector<int> sort(vector<int> vect) {
	vector<int> res = vect;
	for (int s = 0; s < vect.size()-1; s++) {
		if (res[s] < res[s + 1]) swap(res[s], res[s+1]);
	}
	return res;
}


int main()
{
	int n;
	cin >> n;
	vector<int> a;
	for (int i = 0; i < n; i++) {
		int ae;
		cin >> ae;
		a.push_back(ae);
	}

	vector<int> arr;
	for (int i = 0; i < n; i++) {
		if (arr.size() != 5) arr.push_back(a[i]);
		
		for (int j = 0; j < arr.size(); j++) {
			if (a[i] < arr[j]) {
				arr[j] = a[i];
				break;
			}
		
		}
		
		
		for (int s = 0; s < arr.size() - 1; s++) {
			if (arr[s] < arr[s + 1]) swap(arr[s], arr[s + 1]);
		}


		for (int i = 0; i < arr.size(); i++) {
			cout << arr[i] <<' ';
		}
		cout << endl;
	}
}
