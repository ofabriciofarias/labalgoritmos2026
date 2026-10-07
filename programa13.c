/*Refeito para a segunda turma 16h-18h*/
#include <stdio.h>

int main(){
    float valor, desconto, valorPago;
    desconto = 0;

    printf("Digite o valor da sua compra = ");
    scanf("%f", &valor);

    if(valor >= 100 && valor < 200){
        desconto = valor  * 0.1;
    }else if(valor >= 200 && valor < 500){
        desconto = valor * 0.15;
    }else if(valor >= 500){
        desconto = valor * 0.2;
    }

    valorPago = valor - desconto;

    printf("Valor do Desconto = R$ %f\n", desconto);
    printf("Valor a ser pago = R$ %f\n", valorPago);
}
