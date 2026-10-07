#include <stdio.h>
int main(){

    float metros;
    int pontos;

    pontos = 0;
    metros = 5;

    while(metros > 0 && metros < 10){
        printf("Digite o valor em metros: ");
        scanf("%f", &metros);

        if(metros > 0 && metros < 2){
            printf("Voce marcou um ponto\n");
            pontos++;
        }else if(metros >= 2 && metros < 6){
            printf("Voce marcou dois pontos\n");
            pontos = pontos + 2;
        }else if(metros >= 6 && metros < 10){
            printf("Voce marcou tres pontos\n");
            pontos = pontos + 3;
        }else{
            printf("Erro de calibragem do equipamento\n");
        }
    }
    printf("Soma de Pontos = %d\n", pontos);
}
