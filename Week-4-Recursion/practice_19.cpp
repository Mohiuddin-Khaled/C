/* If you already solved the problem for finding the n-th fibonacci number, then you must have a clear version
   on how the program flow works. So now, in this problem, print the values of your fibonacci function in pre-
   order, in-order, and post-order traversal. For example, when n = 5, your program calls 2 and 4 from it, from
   the call of 3, your program calls 1 and 2 again.......

    input
    -----
    5

    output
    ------
    Inorder: 1 3 2 5 2 4 1 3 2  // left - root - right
    Preorder: 5 3 1 2 4 2 3 1 2 // root - left - right
    Postorder: 1 2 3 2 1 2 3 4 5 // left - right - root

            5
          /   \
         3     4
        / \   / \
       1   2 2   3
                / \
               1   2
*/
#include <bits/stdc++.h>
using namespace std;

void inorder(int n)
{
    if (n == 1 || n == 2)
    {
        cout << " " << n;
        return;
    }
    // left child
    inorder(n - 2);
    // root
    cout << " " << n;
    // right child
    inorder(n - 1);
}

void preorder(int n)
{
    if (n == 1 || n == 2)
    {
        cout << " " << n;
        return;
    }
    // root
    cout << " " << n;
    // left child
    preorder(n - 2);
    // right child
    preorder(n - 1);
}

void postorder(int n)
{
    if (n == 1 || n == 2)
    {
        cout << " " << n;
        return;
    }
    // left child
    postorder(n - 2);
    // right child
    postorder(n - 1);
    // root
    cout << " " << n;
}

int main()
{
    int n;
    cin >> n;
    cout << "Inorder: ";
    inorder(n);
    cout << endl
         << "Preorder: ";
    preorder(n);
    cout << endl
         << "Postorder: ";
    postorder(n);
    return 0;
}