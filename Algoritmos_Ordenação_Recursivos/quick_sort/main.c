#include <stdio.h>
#include <stdlib.h>

void quick_sort(int v[], int inicio, int fim){

    if(inicio < fim){
        int pivo_indice = particiona_random(v, inicio, fim);

        quick_sort(v, inicio, pivo_indice - 1);
        quick_sort(v, pivo_indice + 1, fim);
    }

  }

int particiona_random(int v[], int inicio, int fim){
    int pivo_indice = (rand() % (fim - inicio + 1)) + inicio;

    troca(v, pivo_indice, fim);

    return particiona(v, inicio, fim);

}

int particiona(int v[], int inicio, int fim){
    int pivo, pivo_indice, i;

    pivo = v[fim];
    pivo_indice = inicio;

    for(i = inicio; i < fim; i++){
        if(v[i] <= pivo){
            troca(v, i, pivo_indice);
            pivo_indice++;
        }
    }

        troca(v, pivo_indice, fim);

        return pivo_indice;

}

void troca(int v[], int i, int j){
    int aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}

int main(){
    int v[5] = {2,7,8,4,1};
    int n = 5;

quick_sort(v, 0 ,n - 1);


    for (int i = 0; i < n; i++) {
        printf("%d", v[i]);
    }



return 0;
}





