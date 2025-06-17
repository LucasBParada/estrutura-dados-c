#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[5] = {5, 6, 9, 7, 3};
    int n = 5;
    int i, j = 1, aux;

    while(j < n){
        aux = v[j];
        i = j - 1;

        while(i >=0 && v[i] > aux){
            v[i + 1] = v[i];
            i = i - 1;
        }

        v[i + 1] = aux;
        j = j + 1;

    }

    i = 0;
    while (i < n){
        printf("%d", v[i]);
        i = i + 1;
    }


    return 0;
}
