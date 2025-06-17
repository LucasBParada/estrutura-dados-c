#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, min, aux;
    int n = 5, v[5] = {0, 2, 5, 9, 6};

    for (i = 0;i < (n-1); i++){
        min = i;
        for(j = (i+1); j < n; j++){
            if(v[j] < v[min]){
            min = j;
        }

    }

        if(v[i] != v[min]){
            aux = v[i];
            v[i] = v[min];
            v[min] = aux;
            }

        }

        for(i = 0; i<n; i++){
            printf("%d", v[i]);
        }

    return 0;
    }

