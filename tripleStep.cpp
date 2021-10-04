/*
Triple Step: A child is running up a staircase with n steps and can hop either 1 step, 2 steps, or 3
steps at a time. Implement a method to count how many possible ways the child can run up the
stairs.

S(x) corresponde ao numero de maneiras de subir a escada, sendo x o numero de degraus:
S(0) = 1
S(1) = 1
S(2) = 2
S(3) = 4
S(4) = 7
S(5) = 13
S(6) = 24
...
*/

#include<iostream>

using namespace std;

// forma recursiva -> O(3^n)
int step_rec (int n) {
    
    // caso base
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;

    return step_rec(n-1) + step_rec(n-2) + step_rec(n-3); 
}

// forma iterativa -> O(n)
int step_it (int n) {
    int v[3] = {1, 1, 2};

    if (n <= 2) {
        return v[n];
    }

    for (int i = 3; i <= n; i++) { 
        //calcula o proximo
        int temp = v[2] + v[1] + v[0];
        
        //deslocamento
        v[0] = v[1];
        v[1] = v[2];
        v[2] = temp;
    }
    return v[2];
}


int main () {

    int res;
    
    res = step_rec(5);
    //res = step_it(5);

    cout << res << "\n";

    return 0;
}