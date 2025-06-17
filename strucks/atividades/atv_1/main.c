#include <stdio.h>
#include <stdlib.h>

typedef struct Livros{
    char titulo[100];
    int anoEdicao;
    int pag;
    float preco;
}L;

int main(){

    L livros[5];
    int i, media = 0;

    for(i = 0; i<5; i++)
    {
        printf("Informe o titulo de a1: \n");
        scanf("%s",&livros[i].titulo);

        printf("Informe o ano de a1: \n");
        scanf("%d",&livros[i].anoEdicao);

        printf("Informe a qtd de pag na a1: \n");
        scanf("%d",&livros[i].pag);

        printf("Informe a preco de a1: \n");
        scanf("%f",&livros[i].preco);

        media += livros[i].pag;
    }

    media = media / 5;
    printf("A media de pag eh: %d",media);


    return 0;
}

