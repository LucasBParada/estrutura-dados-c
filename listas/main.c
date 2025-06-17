#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    //Definir estrutura que armazena os dados da lista
    typedef struct Produto{
            char nome[30];
            int quantidade;
            struct Produto *prox;
}P;

//Criar novo elemento
Produto*criarElemento(){
//Alocar novo elemento
Produto *novo = malloc(sizeof(Produto));
    //Verifica se alocação ocorreu corretamente
    if(!novo){
        printf("\n Erro ao alocar novo elemento! \n");
        exit(1);
    }
    //Atribui valor null no campo que aponta para o proximo elemento
    novo->prox=NULL;
    return novo;
}

//Inserir um elemento no inicio
void inserirInicio(Produto *cabeca){
    Produto *novo = criarElemento();
    printf("\n Informe o nome do produto: \n");
    scanf("%s", &novo->nome);
    printf("\n Informe a quantidade do produto: \n");
    scanf("%s", &novo->quantidade);
    novo->prox = cabeca->prox;
    cabeca->prox = novo;


}

//Inserir um elemento no final
void inserirFinal(Produto *cabeca){
    Produto *novo = criarElemento();
    printf("\n Informe o nome do produto: \n");
    scanf("%s", &novo->nome);
    printf("\n Informe a quantidade do produto: \n");
    scanf("%s", &novo->quantidade);
    //Atual permite com que a lista seja percorrida
    Produto *atual = cabeca;
    //Enquanto o campo proximo não for nulo ainda existem
    //Elementos a serem visitados e não chegou no fim da lista
    while(atual->prox !=NULL){
        atual = atual -> prox;
    }
    //Chegamos ao final da lista e podemos inserir o novo elemento
    atual -> prox = novo;
}

void inserirMeio(Produto *cabeca){
    char nome[30];
    //O campo nome sera usado como chave para a busca
    printf("\n Informe apos qual nome voce deseja inserir: \n");
    scanf("%s", &nome);
    //Criar o novo elemento que deve ser inserido
    Produto *novo = criarElemento();
    printf("\n Informe o nome do produto: \n");
    scanf("%s", &novo -> nome);
    printf("\n Informe a quantidade do produto: \n");
    scanf("%d", &novo -> quantidade);
    //Permite percorrer cada elemento
    Produto *atual = cabeca;

    while((atual -> prox != NULL) && (!strcmp (atual -> nome,nome))){

            atual = atual -> prox;
    }

    //Se foi atingido o fim da lista entao o valor digitado pelo usuario e nao existe na lista
    if(atual == NULL){
        printf("\n Nome informado não encontrado! \n");
        return 1;

    }
    //Elemento novo deve apontar para o elemento que era vizinho do elemento atual
    novo -> prox = atual -> prox;
    //Elemento atual deve apontar para o novo elemento
    atual -> prox = novo;

}

void removerInicio (Produto *cabeca){
    //Verifica se a lista esta vazia
    if(cabeca -> prox == NULL){
        printf("\n Lista Vazia! \n");
    }else{ //A lista possui elemento a ser removido
        //Descobrir o primeiro elemento
        Produto *primeiro = cabeca -> prox;
        //Faz cabeca apontar para o segundo elemento
        cabeca -> prox = primeiro -> prox;
        //Libera memoria ao remover primeiro elemento
        free(primeiro);
    }

}

void removerFim(Produto *cabeca){
    if(cabeca -> prox == NULL){
        printf("\n Lista vazia \n");
    }else{
        Produto *atual = cabeca -> prox;
        Produto *anterior = cabeca;

        while(atual -> prox != NULL){
            anterior = atual;
            atual = atual -> prox;

        }
        anterior -> prox = NULL;
        free(atual);
    }

}

void removerMeio(Produto *cabeca){
    if(cabeca -> prox == NULL){
        printf("\n Lista Vazia \n");
    }else{
        printf("\n Informe o nome a ser removido \n");
        scanf("%s", &nome);

        Produto *atual = cabeca -> prox;
        Produto *anterior = cabeca;

        while(atual != NULL){
            if(strcmp(atual -> nome,nome)){
                anterior -> prox = atual -> prox;
                free(atual);
            }else{
                anterior = atual;
                atual = atual -> prox;
            }
        }

    }
}

void imprimirLista(Produto *cabeca){
Produto *atual = cabeca -> prox;

    while(atual != NULL){
        printf("\n Nome: %s ", atual -> nome);
        printf("\n Quantidade: %d\n", atual -> quantidade);
        atual = atual -> prox;

    }


}

int main()
{
    int op;
    Produto *cabeca = criarElemento();
    do{
        printf("1 - Inserir no inicio \n");
        printf("2 - Inserir no meio \n");
        printf("3 - Inserir no fim \n");
        printf("4 - Remover do inicio \n");
        printf("5 - Remover do meio \n");
        printf("6 - Remover do fim \n");
        printf("7- Imprimir lista \n");
        printf("0 - Sair");
        scanf("%d", &op);

        switch(op){
        case 1:
            inserirInicio(cabeca);
            break;
        case 2:
            inserirMeio(cabeca);
            break;
        case 3:
            inserirFinal(cabeca);
            break;
        case 4:
            removerInicio(cabeca);
            break;
        case 5:
            removerMeio(cabeca);
            break;
        case 6:
            removerFim(cabeca);
            break;
        case 7:
            imprimirLista(cabeca);
            break;
        case 0:
            printf("Ate logo!");
            break;
        default:
            printf("\n Opcao invalida! \n");

        }


    }while(op!=0);


    return 0;
}
