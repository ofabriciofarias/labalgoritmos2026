/*
Criaremos um laço e somaremos os valores digitados pelo usuário
*/
#include <stdio.h>

int main(){
    int i;
    float val, soma;

    soma = 0;

    for(i = 0; i < 7; i++){
        printf("Digite o %d-esimo numero = ", (i+1));
        scanf("%f", &val);
        soma = soma + val;
        printf("Parcial %d da soma = %.2f\n", (i+1), soma);
    }
    printf("Soma Total = %.2f\n", soma);
}
