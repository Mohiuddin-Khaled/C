// Tower Of Hanoi
// https://www.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1
#include <bits/stdc++.h>
using namespace std;

// s to d (s, m, d)
// s to m (s, d, m)
// print s and d
// m to d (m, s, d)

int TowerOfHanoi(int n, char s, char m, char d)
{
    if (n == 0)
        return 0;
    int cnt = TowerOfHanoi(n - 1, s, d, m);
    int cnt2 = TowerOfHanoi(n - 1, m, s, d);
    return cnt + cnt2 + 1;
}

int main()
{
    int n;
    cin >> n;
    cout << TowerOfHanoi(n, 'a', 'b', 'c') << endl;
    return 0;
}
