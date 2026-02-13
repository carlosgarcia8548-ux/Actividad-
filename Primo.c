#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p;
    printf("Ingresa un numero");
    scanf("%d", &p);
    if((p%2==0 && p!=2)||(p%3==0 && p!=3)||(p%5==0 && p!=5)){
        printf("No es un numero Par");
    }else{
    printf("Es un numero Par");
    }
    return 0;
}
