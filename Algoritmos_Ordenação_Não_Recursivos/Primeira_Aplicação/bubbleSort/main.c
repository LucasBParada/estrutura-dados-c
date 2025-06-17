#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, fim, aux, n=6, v[6]={1,5,9,3,4,0};

    for(fim = n-1; fim>0; --fim){
      for(i = 0;i <fim; ++i){
        if (v[i]> v[i+1]){
            aux = v[i];
            v[i] = v[i+1];
            v[i + 1] = aux;
        }

      }

    }

    for(i=0;i<n;i++){
        printf("%d", v[i]);
    }

    return 0;
}
