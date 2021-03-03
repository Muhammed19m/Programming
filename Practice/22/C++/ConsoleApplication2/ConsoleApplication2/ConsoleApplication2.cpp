#include <iostream>
#include<vector>

using namespace std;

template<typename T>
int F(vector<string> maze, T in)
{
    int t = 0;
    for (int k = 1; k < maze.size() - 1; k++)
    {
        if (in(' ', maze.at(k))) t *= 0;
        else t *= 1;
    }
    if (t == 0) return 1;
    else return 0;
}

bool in(char c, std::string s)
{
    for (int k = 0; k < s.length(); k++) {
        if (c == s[k]) return true;
    }
    return false;

}

string srez(string a, int x, int y)
{
    string res = "";
    for (int i = x; i < y; i++)
    {
        res += a[i];

    }
    return res;
}



int main() 
{
    vector<string> maze{
    "####B######################",
    "# #           #      #    #",
    "# # # ###### #### ####### #",
    "# # # #       #   #       #",
    "#   # # ######### # ##### #",
    "# # # #   #       #     # #",
    "### ### ### ############# #",
    "# #   #     # #           #",
    "# # #   ####### ###########",
    "# # # #       # #         C",
    "# # ##### ### # # ####### #",
    "# # #     ### # #       # #",
    "#   ##### ### # ######### #",
    "######### ### #           #",
    "# ####### ### #############",
    "A           #   # #   #   #",
    "# ############# # # # # # #",
    "# ###       # # # # # # # #",
    "# ######### # # ### # # # F",
    "#       ### # #     # # # #",
    "# ######### # ##### # # # #",
    "# #######   #       #   # #",
    "# ####### ######### #######",
    "#         #########       #",
    "#######E############D######" 
    };
    int y, x, dl = 0;
    cout << "cord: "; cin >> y >> x;
    vector<vector<int>> cord;
    string res = "";
    if (x > 0 and x < maze.at(0).length() and y>0 and y < maze.size() and maze.at(x)[y] != '#')
    {
        while (F(maze, in) and x > 0 and x <= maze.size() and y > 0 and y < (maze.at(0).length()))
        {
            if (maze.at(x)[y + 1] == ' ') {
                vector<int> moment{ x, y };
                cord.push_back(moment);
            }
            if (maze.at(x)[y - 1] == ' ') {
                vector<int> moment{ x, y };
                cord.push_back(moment);
            }
            if (maze.at(x + 1)[y] == ' ') {
                vector<int> moment{ x, y };
                cord.push_back(moment);
            }
            if (maze.at(x - 1)[y] == ' ') {
                vector<int> moment{ x, y };
                cord.push_back(moment);
            }


            if (maze.at(x)[y + 1] == 'C' or maze.at(x)[y + 1] == 'F')
            {
                res += maze.at(x)[y + 1] + " ";
                maze[x] = srez(maze[x], 0, y + 1);
            }
            if (maze[x][y - 1] == 'A') {
                res += maze[x][y - 1] + ' ';
                maze[x] = '#' + srez(maze[x], y, maze[x].length());
            }
            if (maze[x - 1][y] == 'B') {
                res += maze[x - 1][y] + ' ';
                maze[x - 1] = srez(maze[x - 1], 0, y) + '#' + srez(maze[x - 1], y + 1, maze[x].length());
            }

            if (maze[x + 1][y] == 'E' or maze[x + 1][y] == 'D') {
                res += maze[x + 1][y] + ' ';
                maze[x + 1] = srez(maze[x + 1], 0, y) + '#' + srez(maze[x + 1], y + 1, maze[x].length());
            }

            if (maze[x][y + 1] == ' ') {
                maze[x] = srez(maze[x], 0, y) + '.' + srez(maze[x], y + 1, maze[x].length());
                y = y + 1;
                dl = 1;
            }

            else if (maze[x][y - 1] == ' ') {
                maze[x] = srez(maze[x], 0, y) + '.' + srez(maze[x], y + 1, maze[x].length());
                y = y - 1;
                dl = 2;
            }
            else if (maze[x + 1][y] == ' ') {
                maze[x] = srez(maze[x], 0, y) + '.' + srez(maze[x], y + 1, maze[x].length());
                x = x + 1;
                dl = 3;
            }

            else if (maze[x - 1][y] == ' ') {
                maze[x] = srez(maze[x], 0, y) + '.' + srez(maze[x], y + 1, maze[x].length());
                x = x - 1;
                dl = 4;
            }
            else {
                if (dl == 1) maze[x] = srez(maze[x], 0, y) + '.' + srez(maze[x], y + 1, maze[x].length());
                if (dl == 2) maze[x] = srez(maze[x], 0, y) + '.' + srez(maze[x], y + 1, maze[x].length());
                if (dl == 3) maze[x] = srez(maze[x], 0, y) + '.' + srez(maze[x], y + 1, maze[x].length());
                if (dl == 4) maze[x] = srez(maze[x], 0, y) + '.' + srez(maze[x], y + 1, maze[x].length());
            }


            if (maze[x - 1][y] != ' ' and maze[x + 1][y] != ' ' and maze[x][y - 1] != ' ' and maze[x][y + 1] != ' ' and maze[x][y] != ' ')
            {
                if (cord.size() != 0)
                {
                    x = cord[0][0];
                    y = cord[0][1];

                    if (maze[x - 1][y] != ' ' and maze[x + 1][y] != ' ' and maze[x][y - 1] != ' ' and maze[x][y + 1] != ' ' and maze[x][y] != ' ')
                        cord.erase(cord.begin());
                }

                else break;
            }
        }

        if (res == "")cout << "no out";
        else cout << res;
    }
    else cout << "coordinates are wrong";

}