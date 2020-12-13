#include <iostream>
#include <vector>
using namespace std;


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
		if (arr.size() == 5) {
			for (int l = i; l < i+1; l++)
				for (int j = 0; j < arr.size(); j++) {
					if (a[l] < arr[j]) {
						arr[j] = a[l];
						break;
					}

				}
		}
		if (arr.size() >= 2)
			for (int co = 0; co < arr.size(); co++) {
				for (int s = 0; s < arr.size() - 1; s++) {
					if (arr[s] < arr[s + 1]) {
						int sw = arr[s + 1]; arr[s + 1] = arr[s]; arr[s] = sw;
					}
				}
			}

		for (int i = 0; i < arr.size(); i++) {
			cout << arr[i] << ' ';
		}
		cout << endl;
	}
}
