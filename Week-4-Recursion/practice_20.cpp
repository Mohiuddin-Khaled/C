/* ALl of you have seen the tower of Hanoi. You have 3 pillars 'a', 'b' and 'c', and you need transfer all disks
   form one pillar to another. Conditions are, only one disk at a time is moveable, and you can never place a
   larger disk over a smaller one. write a recursive solution to print the moves that simulates the task, a -> b
   means move the topmost of tower a to tower b.

   input
   -----
   3

   output
   ------
   a -> c
   a -> b
   c -> b
   a -> c
   b -> a
   b -> c
   a -> c
*/

#include <bits/stdc++.h>
using namespace std;

// s - source, m - middle, d - destination
void tower(int n, char s, char m, char d)
{
    if (n == 0)
        return;
    // first move n - 1 disks from source to middle
    // using destination as middle pillar
    tower(n - 1, s, d, m);
    // the only left n-th disk can be moved directly from source to destination
    cout << s << " -> " << d;
    // on first step we've sent n - 1 disks to the middle
    // and now, from the middle pillar, we'll transfer them back to destination
    // using the source as the middle pillar
    tower(n - 1, m, s, d);
}

int main()
{
    int n;
    cin >> n;
    tower(n, 'a', 'b', 'c');
    return 0;
}