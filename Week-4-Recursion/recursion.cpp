#include <bits/stdc++.h>
using namespace std;

// 0! = 1! = 1
// n! = n(n - 1)(n - 2)!.....
// int factorial(int n)
// {
/// I know this, so I don't want my function to go any further....
//     if (n == 0 || n == 1)
//         return 1;
/// don't bother what to do, just recuse the function
//     else
//         return n * factorial(n - 1);
// }

// A simple technique for converting recursions and loops
// Forward
// for loop:
// for (int i = 0; i < n; i++)
// {
/// do whatever needed
// }

// loop convert to recursion
// Equivalent recursion:
// void FOR(int i, int n)
// {
//     if (i == n) // terminate
//         return;
/// do whatever needed
//     FOR(i + 1, n); // go next step
// }

// Backword
// for loop:
// for (int i = n - 1; i >= 0; i--)
// {
/// do whatever needed
// }

// Equivalent Recursion:
// void ROF(int i, int n)
// {
//     if (i == n) // terminates
//         return;
//     ROF(i + 1, n); // keep going to the last
/// do whatever needed when returning from previous steps
// }

// void Function(int i, int n)
// {
//     if (i > n)
//         return;

//     Function(i + 1, n);
//     cout << i << " ";
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int i = 0;
//     Function(i, n);
//     return 0;
// }

// Explanation
// so indeed it ran on reverse direction
/*
    call Function1 with i = 1
        call Function2 with i = 2
            call Function3 with i = 3
                call Function4 with i = 4
                    call Function5 with i = 5
                        call Function6 with i = 6
                            i breaks condition, no more calls
                        return to Function5
                        print 5
                    return to Function4
                    print 4
                return to Function3
                print 3
            return to Function2
            print 2
        return to Function1
        print1
    return to main, done!
*/
// call stack and function call recursively
// fun(5) <-> fun(4) <-> fun(3) <-> fun(2) <-> fun(1) <-> main()

// int f(int n)
// {
//     if (n == 0)
//         return 1;
//     return n * f(n - 1);
// }

// recursion bear the risk exceeding memory and time limits
// recursion in O(log n) is safe
// recursion in O(n) is pretty small
