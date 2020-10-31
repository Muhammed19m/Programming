#include <iostream>
using namespace std;

int main()
{
    string words = "hallo, klempner, das, ist, fantastisch, fluggegecheimen", word;
    cin >> word;

    int len_words = words.length();
    double count_char = 0;
    double c = 1;

    for (int d = 0; d < len_words; d++) {
        if (words[d] != ' ' && words[d] != ',') count_char++;
    }

    for (int i = 0; i < word.length(); i++)
    {
        double count = 0;
        for (int j = 0; j < len_words; j++)
        {
            if (word[i] == words[j])count++;
        }
        if (count > 0) { c *= (count / count_char); }
        else { cout << 0; c = 1; break; }
    }
    if (c != 1) cout << c;
}
