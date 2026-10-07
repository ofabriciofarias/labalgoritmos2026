#include <stdio.h>

int main(){

    int op;
    float a, b, res;

    printf("MENU DE OPCOES\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Digite sua opcao = ");
    scanf("%d", &op);

    if(op == 1){
        printf("Digite o primeiro valor = ");
        scanf("%f", &a);
        printf("Digite o segundo valor = ");
        scanf("%f", &b);

        res = a + b;

        printf("Soma = %f\n", res);
    }else if(op == 2){
        printf("Digite o primeiro valor = ");
        scanf("%f", &a);
        printf("Digite o segundo valor = ");
        scanf("%f", &b);

        res = a - b;

        printf("Subtracao = %f\n", res);
    }else if(op == 3){
        printf("Digite o primeiro valor = ");
        scanf("%f", &a);
        printf("Digite o segundo valor = ");
        scanf("%f", &b);

        res = a * b;

        printf("Multiplicacao = %f\n", res);
    }else if(op == 4){
            printf("Digite o primeiro valor = ");
            scanf("%f", &a);
            printf("Digite o segundo valor = ");
            scanf("%f", &b);

            if(b == 0.0){
            printf("Impossivel Dividir\n");
            }else{
            res = a/b;

            printf("Divisao = %f\n", res);
        }
    }else{
        printf("Opcao Invalida!\n");

    }

}
