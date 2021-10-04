/*
Sequência de Fibonacci:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55,…

*/

#include<iostream>

using namespace std;

// O(2^n)
int fibo (int n) {

    if (n <= 0)
        return 0;
    if (n == 1)
        return 1;

    return fibo(n-1) + fibo(n-2);
}

int main () {

    int res = fibo(10);

    cout << res << "\n";

    return 0;
}