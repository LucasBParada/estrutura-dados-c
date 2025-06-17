#include <stdio.h>
#include <stdlib.h>

int main()
{
 int l, c, n=5, mat[5][5];

 for (l=0;l<n;l++){
    for (c=0;c<n;c++){
        if (l==c){
            mat [l][c]=1;
            printf("%d ", mat[l][c]);
        } else {
            mat[l][c]=0;
            printf("%d ", mat[l][c]);
        }
        }
        printf("\n");
    }

    return 0;
 }

