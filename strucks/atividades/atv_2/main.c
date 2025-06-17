#include <stdio.h>
#include <stdlib.h>
typedef struct Habitantes{
    int idade;
    char sexo;
    int num_filhos;
    float salario;
}H;

int main()
{
    H habitantes[500];
    int i;
    float media = 0;

    for(i = 0; i <500; i++){
        printf("Informe a idade: \n");
        scanf("%d", &habitantes[i].idade);

        printf("Informe o sexo: \n");
        scanf("%s", &habitantes[i].sexo);

        printf("Informe o numero de filhos: \n");
        scanf("%d", &habitantes[i].num_filhos);

        printf("Informe o salario: \n");
        scanf("%f", &habitantes[i].salario);

    }


    for(i=0; i<500; i++){
        media += media + habitantes[i].salario;
    }

    media = media / 500;
    printf("A medida de paginas: %.2f", media);

    return 0;
}
