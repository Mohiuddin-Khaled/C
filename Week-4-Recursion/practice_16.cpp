/* read a string from keyboard and print it in reverse order. you must not use any array to store the
   characters. write a recursive solution to solve this problem.

   input
   -----
   hello

   output
   ------
   olleh
*/
#include <bits/stdc++.h>
using namespace std;

void reversePrint()
{
    char ch = getchar(); // reads including '\n'
    if (ch != '\n')      // base case
        reversePrint();  // recursive call
    cout << ch;          // print while returning
}

int main()
{
    reversePrint();
    return 0;
}
