#include <stdio.h>

/*
INSTRUCCIONES:
Usa el operador % para verificar si el número es par.
*/

int main() {
    int num;
    printf("Ingresa un nùmero");
    scanf("%d", &num);

    if (num % 2 == 0) 
    {
        printf("Es par\n");
    }
    else
    {
        printf("No es par\n");
    }

    return 0;
}
