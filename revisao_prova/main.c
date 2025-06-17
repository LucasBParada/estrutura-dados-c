#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Estrutura Homogênea - Não permite mais de um tipo de dado:
    //Vetor e Matriz: Armazena vários valores com única variável, estruturas estáticas, alocados de forma sequêncial, uso de índices.
    // Dimensões diferentes: Vetor - Índice / Matriz - 2 Índices

    int vet[5]={1,2,3,4,5};
    int i, maior=0;
    vet[0] =1;
    vet[1] = 2;
    vet[2] = 3;

    for(i=0; i<5; i++){
        printf("\n Informe o valor:");
        scanf("%d", &vet[i]);
    }

    for(i=0;i<5;i++){
        if(vet[i] > maior){
            maior = vet[i];
        }
    }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        int m[3][2] = {1,2,3,4,5,6};
        mat[1][2]
        int l, c, aux;

        mat[0][0] = 1;
        mat[0][1] = 2;
        mat[1][0] = 3;

        for(l=0;l<5;l++){
            for(c=0;c<2;c++){
                printf(" \n Informe o valor");
                scanf("%d",&mat[l][c]);
            }
        }

        printf("\n Digite valor a ser buscado");
        scanf("%d", &aux);
        for(l=0;l<3;l++){
            for(c=0;c<2;c++){
                if(mat[l][c] == aux){
                    printf("\n Elemento encontrado");
                }
            }
        }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        typedef struct usuarios{
            char login[30];
            char senha[30];
            int idUsuario;

        }U;

        int main(){
        U user1;
        U usuarios[3];
        printf("Informe o login:");
        scanf("%s", &user1.login);
        printf("Informe a senha");
        scanf("%s", &user1.senha);
        printf("Informe o codigo");
        scanf("%d", &user1.idUsuario);

        for(i=0;i<3;i++){
            printf("Informe o login");
            scanf("%s", &usuarios[i].login);
            printf("Informe a senha");
            scanf("%s", &usuarios[i].senha);
            printf("Informe o codigo");
            scanf("%d", &usuarios[i].idUsuario);

        }


    }

    return 0;
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        int main(){
            int *p1;
            int num1,num2,aux;
            printf("Informe o valor de 1");
            scanf("%d",&num1);
            printf("Informe o valor 2");
            scanf("%d", &num2);
            aux = num1;
            num1 = num2;
            num2 = aux;
            printf("num1 = %d e num2 = %d", num1,num2);

        return 0;
        }


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        //Lista Encadeada: heterogênea, dinâmica, "sob demanda".

        //Operações: Inserção(Inicio, meio e fim). Remoção(Incio, meio e fim). Atualização. Busca. Impressão.










