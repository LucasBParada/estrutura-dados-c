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
    int i, j, min, aux;

    for(i = 0; i < (n - 1); i++){
        min = i;

        for(j = (i + 1); j < n; j++){
            if(v[j] < v[min])
            min = j;
        }

        if(v[i] != v[min]){
            aux = v[i];
            v[i] = v[min];
            v[min] = aux;
        }
    }

        for(i = 0; i < n; i++){
            printf("%d", v[i]);
        }

    return 0;
}
