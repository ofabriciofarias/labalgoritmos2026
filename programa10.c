#include <stdio.h>

int main(){

    int op;
    float n1, n2, resultado;

    printf("MENU DE OPCOES\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    scanf("%d", &op);

    if(op == 1){
        printf("Digite dois valores para fazer a soma\n");
        scanf("%f%f", &n1, &n2);
        resultado = n1 + n2;
        printf("Soma = %f\n", resultado);
    }else if(op == 2){
        printf("Digite dois valores para fazer a subtracao\n");
        scanf("%f%f", &n1, &n2);
        resultado = n1 - n2;
        printf("Subtracao = %.2f\n", resultado);
    }else if(op == 3){
        printf("Digite o primeiro valor = ");
        scanf("%f", &n1);
        printf("Digite o segundo valor = ");
        scanf("%f", &n2);
        resultado = n1 * n2;
        printf("Multiplicacao = %f\n", resultado);
    }else if(op == 4){
        printf("Digite o valor do numerador = ");
        scanf("%f", &n1);
        printf("Digite o valor do denominador = ");
        scanf("%f", &n2);

        if(n2 == 0.0){
            printf("Impossivel Dividir\n");
        }else{
            resultado = n1/n2;
            printf("Divisao = %.2f\n", resultado);
        }
    }
}
