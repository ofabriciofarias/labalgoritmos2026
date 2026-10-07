#include <stdio.h>

int main(){

    float metros;

    printf("Digite o valor em metros: ");
    scanf("%f", &metros);

    if(metros > 0 && metros < 2){
        printf("Voce marcou um ponto\n");
    }else if(metros >= 2 && metros < 6){
        printf("Voce marcou dois pontos\n");
    }else if(metros >= 6 && metros < 10){
        printf("Voce marcou tres pontos\n");
    }else{
        printf("Erro de calibragem do equipamento\n");
    }
}
