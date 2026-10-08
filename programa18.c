/*
Faça um programa que receba a altura de 6 alunos e calcule a média
da altura.
*/
#include <stdio.h>

int main(){
    int i;
    float altura, soma, totalAlunos, media;

    totalAlunos = 6;
    soma = 0;

    for(i = 0; i < totalAlunos; i++){
        printf("Digite a altura do aluno %d = ", (i+1));
        scanf("%f", &altura);

        soma = soma + altura;
    }

    media = soma/totalAlunos;
    printf("A media de altura = %.2f\n", media);
}
