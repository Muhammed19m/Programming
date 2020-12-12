#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

template<typename T>
bool sortw(vector<T> ls, bool up_down = true) {
	int len_ls = ls.size() - 1;
	if (up_down) {
		for (int i = 0; i < len_ls; i++) { if (ls[i] > ls[i + 1]) return false; }
	}
	else {
		for (int i = 0; i < len_ls; i++) { if (ls[i] < ls[i + 1]) return false; }
	}
	return true;
}

template<typename T>
vector<T> BozoSort(vector<T> arr, bool up_down = true) {
	int len = arr.size();
	srand(time(0));
	vector<T> result_sort = arr;
	while (!sortw(result_sort, up_down))
	{
		int e1 = rand() % len;
		int e2 = rand() % len;
		swap(result_sort[e1], result_sort[e2]);
	}
	return result_sort;
}

template<typename T>
vector<T> BozoSort(vector<vector<T>>& matrix, bool up_down = true) {
	vector<T> result_sort;
	int len = matrix.size();
	for (vector<int> el : matrix) {
		for (int j = 0; j < el.size(); j++) {
			result_sort.push_back(el[j]);
		}

	}
	return BozoSort(result_sort, up_down);
}
template<typename T>
vector<T> BozoSort(T e1, T e2, T e3, bool up_down = true){
	vector<T> b3;
	b3.push_back(e1); b3.push_back(e2); b3.push_back(e3);
	return BozoSort(b3, up_down);
}
void print(vector<int> arr) {
	int len = arr.size();
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}cout << endl;
}


int main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	cout << "количество чисел требующих сортировки: "; cin >> n;
	int sqrt_n = pow(n, 0.5);
	cout << "введите элементы массива: ";
	vector<int> arr;	
	vector<vector<int>> matrix;
	vector<int> path;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		arr.push_back(num);
		path.push_back(num);
		if (path.size() == sqrt_n) {
			matrix.push_back(path);
			path.clear();
		}
	}
	print(BozoSort(arr));
	print(BozoSort(arr, false));
	print(BozoSort(matrix));
	print(BozoSort(matrix, false));
	print(BozoSort(arr[0], arr[1], arr[2]));
	print(BozoSort(arr[0], arr[1], arr[2], false));

	print(BozoSort(arr));
	print(BozoSort(arr, false));
	print(BozoSort(matrix));
	print(BozoSort(matrix, false));
	print(BozoSort(arr[0], arr[1], arr[2]));
	print(BozoSort(arr[0], arr[1], arr[2], false));
}