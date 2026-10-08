#include <stdio.h>
//Maior, menor e pares e impares
int main(){
    int i;
    int idade[5], soma, maior, menor, qtdImpar = 0, qtdPar = 0;
    float media;

    for(i = 0; i < 5; i++){
        printf("Digite a idade do aluno %d = ", (i+1));
        scanf("%d", &idade[i]);

        if(idade[i]%2 == 0)
            qtdPar++;
        else
            qtdImpar++;
    }

    maior = idade[0];
    menor = idade[0];
    soma = 0;

    for(i = 0; i < 5; i++){
        soma = soma + idade[i];

        if(maior < idade[i])
            maior = idade[i];
        if(menor > idade[i])
            menor = idade[i];
    }

    media = soma/5.0;

    printf("Media de idade da Turma = %.2f anos\n", media);

    printf("Quantidade de Pares: %d\n", qtdPar);
    printf("Quantidade de Impares: %d\n", qtdImpar);
    printf("Menor valor = %d\n", menor);
    printf("Maior valor = %d\n", maior);
}
