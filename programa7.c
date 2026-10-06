#include <stdio.h>

int main(){ //ALGORITMO

    int idade; //DECLARE idade NUMERICO

    printf("Digite a idade do jogador = "); //ESCREVA "Digite a idade do jogador = "
    scanf("%d", &idade); //LEIA idade

    if(idade >= 5 && idade <= 7) //SE idade >= 5 E idade <= 7 ENTAO
        printf("Infantil A"); //ESCREVA "Infantil A"
    else if(idade >= 8 && idade <= 10) //SE idade >= 8 E idade <= 10 ENTAO
        printf("Infantil B"); //ESCREVA "Infantil B"
    else if(idade >= 11 && idade <= 13) //SE idade >= 11 E idade <= 13 ENTAO
        printf("Juvenil A"); //ESCREVA "Juvenil A"
    else if(idade >= 14 && idade <= 17) //SE idade >= 14 E idade <= 17 ENTAO
        printf("Juvenil B"); //ESCREVA "Juvenil B"
    else if(idade >= 18) //SE idade >= 18 ENTAO
        printf("Adulto"); //ESCREVA "Adulto"
    else //SENAO ENTAO
        printf("Entrada Invalida"); //ESCREVA "Entrada Invalida"

} //FIM_ALGORITMO

    /*
        Em portugol
        SE
        SENAO SE
        SENAO
    */
