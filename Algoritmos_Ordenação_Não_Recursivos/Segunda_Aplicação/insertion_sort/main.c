#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[5] = {5, 9, 2, 6, 1}, n = 5;
    int i = 0;
    int j = 1;
    int aux = 0;

    while(j < n){
        aux = v[j];
        i = j - 1;

        while((i >= 0) && (v[i] > aux)){
            v[i + 1] = v[i];
            i = i - 1;
        }

        v[i + 1] = aux;
        j = j + 1;

    }

    for(i = 0; i < n; i++){
        printf("%d", v[i]);
    }

    return 0;
}
