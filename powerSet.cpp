/*
Power Set: Write a method to return all subsets of a set.
*/

#include<iostream>

using namespace std;

// O(2^n)
// v -> set completo
// subset -> um booleano que marca quais elementos estao no subset
// n -> numero de elementos do set completo
// k -> elemento que estamos analisando no momento
void power (int* v, bool* subset, int n, int k) {
    if (n == k) {
        //imprime os elementos marcados no subset
        for (int i = 0; i < n; i++) {
            if (subset[i] == true) {
                cout << v[i] << " ";
            }
        }
        cout << "\n";
        return;
    }
    //nao marca o elemento atual e passa para o proximo
    power(v, subset, n, k+1);

    //marca o elemento atual e passa para o proximo
    subset[k] = true;
    power(v, subset, n, k+1);

    //desfaz a marcação
    subset[k] = false;
    
    return;
}

int main () {
    int n = 4;
    bool subset[4] = {0, 0, 0, 0};
    int v[4] = {1, 2, 3, 4};

    power(v, subset, n, 0);

    return 0;
}