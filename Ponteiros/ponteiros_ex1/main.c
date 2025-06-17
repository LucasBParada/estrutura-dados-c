#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y, *p, x;
    y = 0;
    p = &y; //Ponteiro apontando para y
    x = *p; //x recebe p que aponta para y
    x = 4; //atribuido valor 4 para x
    (*p)++; // y = 1
    x--; // x = 3
    (*p) += x; // formula y + x  = 4
    printf("y = %d\n", y);

    return 0;
}
