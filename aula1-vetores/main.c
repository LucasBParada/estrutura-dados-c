#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vet [4];
    int i;
    double media, soma;


    printf("Digite suas notas\n");

    for ( i = 0; i<4; i++){

        scanf("%f", &vet[i]);
        soma = soma + vet[i];
    }



    media = soma / 4;


    printf("Sua media eh: %lf", media);




    return 0;
}
