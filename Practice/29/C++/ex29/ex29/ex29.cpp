#include <iostream>
#include <vector>
#include <map>
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
vector<T> BozoSort(T e1, T e2, T e3, bool up_down = true) {
	vector<T> b3;
	b3.push_back(e1); b3.push_back(e2); b3.push_back(e3);
	return BozoSort(b3, up_down);
}
template <typename T>
void print(vector<T> arr) {
	int len = arr.size();
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}cout << endl;
}



struct Student {
	string tname;
	int tgroup;
	map<string, int> texams;
	

	Student(string name, int group, int math, int phys, int hist, int prog) {









	}





};





int main(){
	vector<Student> students = {
	Student("Vadik", 5, 5, 5, 5),
	Student("Yan", 5, 5, 5, 4),
	Student("Vasya", 4, 3, 2, 4),
	Student("Gadik", 2, 5, 3, 4),
	Student("Pew", 5, 2, 2, 4),
	Student("Die", 2, 2, 2, 2),
	Student("Pie", 3, 3, 5, 4),
	Student("Gol", 4, 5, 3, 4),
	Student("Kiril", 5, 1, 5, 4),
	Student("Potato", 0, 5, 5, 4)
	};



}



