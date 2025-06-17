#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[100] = {0}, i;

    int * p = &vetor;
    p = vetor;

    for(i=0; i<100; i++){
        *(p + i) = i + 1;

    }

    printf("Resultado eh: ");
    for(i=0; i<100; i++){
        printf("%d ", *(p + i));

    }


    return 0;
}
