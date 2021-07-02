/*
For a positive integer n let's define a function f:

f(n) =  - 1 + 2 - 3 + .. + ( - 1)nn

Your task is to calculate f(n) for a given integer n.

Input
The single line contains the positive integer n (1 ≤ n ≤ 1015).

Output
Print f(n) in a single line.

Now Write the code.
*/

#include <iostream>

using namespace std;

main()
{
    long long n;
    cin >> n;
    cout << n / 2 - n % 2 * n;
}