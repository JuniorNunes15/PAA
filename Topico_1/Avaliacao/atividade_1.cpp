#include <iostream>

using namespace std;

int calcula_raiz(int n) {
    for(int i = 0; i < n; i++) {
        if(i * i == n)
            return i;
        else if(i * i > n)
            return i-1;
    }
    return -1; //return apenas para o compilador nao ficar reclamando, pois nunca vai chegar nele
}

void ordenacao_selecao(int n, int v[]) {
    for(int i = 0; i < n; i++) {
        int index_min = i;
        for(int j = i; j < n; j++) {
            if(v[index_min] > v[j])
                index_min = j;
        }
        swap(v[i], v[index_min]);
    }
}

int main() {

    int x;
    cin >> x;

    cout << calcula_raiz(x);

    int v[8] = {5,7,6,4,3,7,2,10};
    ordenacao_selecao(8, v);

    for(int i = 0; i < 8; i++) {
        cout << v[i] << " ";
    }

    return 0;
}