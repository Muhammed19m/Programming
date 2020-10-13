#include <iostream>
#include<ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));
    cout <<"{приветственное сообщение от игры}"<<endl ;
    int s, n, z, count, u;
    bool d = true, a;
    while ((d) || (s == 1)) {
        d = false;
        n = rand()%101;
        z = 0;
        count = 0;
        a = true;
        while (a && count != 5) {
            cin >> u;
            if (u == n) {
                cout << "Поздравляю вы угадали"<<endl;  a = false; z = 1; }
            else if (u > n && !(count == 4)) { cout<<"Загаданное число меньше"<<endl; }
            else if (u < n && !(count == 4)) { cout << "Загаданное число больше"<<endl; }
            count++;
        }
        if (z == 0) { cout << "Вы проиграли. Было заданно: " << n<<endl; }
        cout << "Хотите начать сначала? (1 - ДА ): "; cin >> s;
    }   


}
