#include <stdio.h>
int main(){
    float valorCompra, desconto, valorPago;
    desconto = 0;

    printf("Digite o valor da compra = ");
    scanf("%f", &valorCompra);

    if(valorCompra >= 100 && valorCompra < 200){
        desconto = valorCompra * 0.1;
    }else if(valorCompra >= 200 && valorCompra < 500){
        desconto = valorCompra * 0.15;
    }else if(valorCompra >= 500){
        desconto = valorCompra * 0.2;
    }

    valorPago = valorCompra - desconto;

    printf("\nRELATORIO\n");
    printf("Valor da Compra = R$ %.2f\n", valorCompra);
    printf("Desconto = R$ %.2f\n", desconto);
    printf("Valor a ser Pago = R$ %.2f\n", valorPago);
}
