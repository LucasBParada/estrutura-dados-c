#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[5], n = 5;
    v[0] = 5;
    v[1] = 9;
    v[2] = 2;
    v[3] = 6;
    v[4] = 1;
    int i, fim, aux;

    for(fim = n - 1; fim > 0; --fim){
        for(i = 0; i < fim; ++i){
            if(v[i] > v[i + 1]){
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
            }
        }

    }

    for(i = 0; i < n; i++){
        printf("%d", v[i]);
    }

    return 0;
}
