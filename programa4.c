/*
ALGORITMO
    DECLARE a, b, s NUMERICO

    ESCREVA "Digite o valor 1"
    LEIA a

    ESCREVA "Digite o valor 2"
    LEIA b

    s <- a + b

    ESCREVA "O valor da soma é ", s

FIM_ALGORITMO
*/
#include <stdio.h>

int main(){

    int a, b, s;

    printf("Digite o valor 1 = ");
    scanf("%d", &a);

    printf("Digite o valor 2 = ");
    scanf("%d", &b);

    s = a + b;

    printf("Soma = %d\n", s);
}
