#include <stdio.h>
#include <stdlib.h>

//Criação tipo de dado alunos.
typedef struct Aluno{
    char nome[30];
    int RA;
    float nota;
}AL;

int main()
{
   AL a1, a2;
   AL alunos[2];

   printf("Informe o nome de a1: \n");
   scanf("%s", &alunos[0].nome);
   printf("Informe o RA de a1: \n");
   scanf("%d", &alunos[0].RA);
   printf("Informe a nota de a1: \n");
   scanf("%f", &alunos[0].nota);

    printf("Informe o nome de a2: \n");
    scanf("%s", &alunos[1].nome);
    printf("Informe o RA de a2: \n");
    scanf("%d", &alunos[1].RA);
    printf("Informe a nota de a2: \n");
    scanf("%f", &alunos[1].nota);


    //Exibir informações.
    printf("Nome 1: %s \n ", a1.nome);
    printf("RA 1:   %d \n", a1.RA);
    printf("Nota 1: %f \n", a1.nota);
    printf("Nome 2: %s \n", a2.nome);
    printf("RA 2: %d \n", a2.RA);
    printf("Nota 2: %f \n", a2.nota);


    return 0;
}
