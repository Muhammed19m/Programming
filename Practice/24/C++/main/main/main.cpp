#include <iostream>
#include <fstream>
#include "nlohmann\json.hpp"
#include <map>
using namespace std;
using namespace nlohmann;

int main()
{
	string path = "in.json";
	ifstream file(path);
	json j_file;
	file >> j_file;
	map<string, int> users;

	for (int c = 0; c < j_file.size(); c++) {
		
		if (j_file["completed"]) 
		{
			users.try_emplace("userId", j_file[c]["Id"]);
			for (int i = 0; i < users.size(); i++)
			{
				cout << users["userId"];
			}

			

		}
		
	}
	






}