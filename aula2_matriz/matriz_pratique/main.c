#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat [5][5], l, c, i=0, n = 5, vet[5];



    for(l=0; l<n; l++){
        for(c=0; c<n; c++){
            printf("Digite seus valores\n");
            scanf("%d", &mat[l][c]);
        }
    }

    for(l=0; l<n; l++){
        for(c=0; c<n; c++){
            if(l==c){//diagonal principal
                vet[i]=mat[l][c];
                printf("%d ",vet[i]);
            }
        }
    }



    return 0;
}
