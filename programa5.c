/*
ALGORITMO
    DECLARE salarioAtual, novoSalario, aumento NUMERICO

    ESCREVA "Digite o salario atual"
    LEIA salarioAtual

    aumento <- salarioAtual * 15/100

    novoSalario <- salarioAtual + aumento

    ESCREVA "Novo salario = ", novoSalario
    ESCREVA "Salario Antigo = ", salarioAtual
    ESCREVA "Valor do aumento = ", aumento

FIM_ALGORITMO

*/
#include <stdio.h>
int main(){
    float salarioAtual, aumento, novoSalario;

    printf("Digite o seu salario atual = ");
    scanf("%f", &salarioAtual);

    aumento = salarioAtual * 15/100;
    novoSalario = salarioAtual + aumento;

    printf("Salario antigo = R$ %.2f\n", salarioAtual);
    printf("Aumento = R$ %.2f\n", aumento);
    printf("Novo Salario = R$ %.2f\n", novoSalario);
}
