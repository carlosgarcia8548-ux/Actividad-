#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, c, d;
    float b;
    printf("Ingresa tu edad, tu calificación y la cantidad de materias reprobadas\n");
    scanf("%d %f %d", &a, &b, &c);

    if(a >= 18){
        if(b >= 9.0 && c == 0)
            printf("Puedes obtener la beca");
        else{
            if(c <= 2)
                printf("Puede reinscribirse");
            else{
                if(c > 3)
                    printf("Esta en situación crítica");
                else
                    printf("No puedes aplicar a la beca");
            }
        }
    }
    else
        printf("No puedes aplicar a la beca");

    return 0;
}

