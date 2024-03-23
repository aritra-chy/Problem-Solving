/*************************/
/* Author : ARITRA CHOWDHURY
   Date : 25/02/2024 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    string song = "";

    for (int i = 0; i < s.length(); ++i) 
    {
        if (s.substr(i, 3) == "WUB") 
        {
            i += 2;

            if (!song.empty() && song.back() != ' ') 
            {
                song += ' ';
            }
        } 
        else
        {
            song += s[i];
        }
    }

    cout << song << endl;

    return 0;
}
