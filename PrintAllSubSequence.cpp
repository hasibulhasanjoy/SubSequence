#include <bits/stdc++.h>
using namespace std;
void subSequence(string s, int i, string sub)
{
    if (i = s.length())
    {
        cout << sub << endl;
        return;
    }
    char currentCharacter = s[i];
    subSequence(s, i + 1, sub + currentCharacter);
    subSequence(s, i + 1, sub);
}

int main()
{
    string s = "abc";
    int i = 0;
    subSequence(s, i, "");
    return 0;
}