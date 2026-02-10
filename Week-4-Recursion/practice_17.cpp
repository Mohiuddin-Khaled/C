/* write a recursive program that determines whether a given sentence is palindromic or not
   just considering the alpha-numeric characters ('a' - 'z') ('A' - 'Z') ('0' - '9')

   input
   -----
   madam, i 'm adam
   hulala

   output
   ------
   palindromic
   not palindromic

   # i, j or i + 1, j - 1
   # try to make it case insensitive, i.e. 'a' == 'A'
*/
#include <bits/stdc++.h>
using namespace std;

bool isValid(char ch)
{
    return isalnum(ch); // alphabet or digit
}

bool isPlain(const string &st, int i, int j)
{
    if (i >= j) // base case
        return true;
    if (!isValid(st[i])) // skip left invalid
        return isPlain(st, i + 1, j);
    if (!isValid(st[j])) // skip right invalid
        return isPlain(st, i, j - 1);
    if (tolower(st[i]) != tolower(st[j])) // case-insensitive compare
        return false;
    return isPlain(st, i + 1, j - 1);
}

int main()
{
    string st;
    while (getline(cin, st))
    {
        if (isPlain(st, 0, st.length() - 1))
            cout << "palindromic" << endl;
        else
            cout << "not palindromic" << endl;
    }
    return 0;
}