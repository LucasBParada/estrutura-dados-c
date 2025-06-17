#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[5], vet2[5], i, p;

    printf("Digite seus numeros:\n");

    for (i = 0; i<5; i++){

    scanf("%d",&vet[i]);
    scanf("%d", &vet2[i]);
  }


    for (i = 0; i<5; i++){

    p = vet[i] + vet2[i];
    printf("Seus valores eh: %d\n", p);
  }





    return 0;
}
