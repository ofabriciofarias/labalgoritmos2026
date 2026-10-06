/*
Desenvolva um algoritmo que calcule o valor total de uma compra de ingressos
para diferentes tipos de eventos:
Cinema,
Teatro e
Show.
O programa deve pedir para o usuário digitar a quantidade de ingressos
para cada um dos eventos.
O preço dos ingressos é o seguinte:
Ingresso de Cinema = R$ 20,00.
Ingresso de Teatro = R$ 50,00.
Ingresso de Show = R$ 100,00.
Ao final, dependendo do valor total da compra,
o programa deverá exibir uma das seguintes mensagens:
Compra Menor que R$ 100,00: "Você fez uma compra leve. Aproveite o evento!"
Compra Maior ou igual a R$ 100,00 e Menor que R$ 200,00: "Você comprou para
curtir o fim de semana!"
Compra Maior ou igual a R$ 200,00: "Você fez uma grande compra!
Divirta-se em todos os eventos!"
Solução:
Obs: Por opção, iremos responder usando o int
*/
#include <stdio.h>

int main(){
    int cinema, teatro, show, total;
    printf("Digite a quantidade do ingresso do cinema, teatro e show, respectivamente");
    scanf("%d%d%d", &cinema, &teatro, &show);

    total = cinema * 20 + teatro * 50 + show * 100;

    if(total < 100){
        printf("Voce fez uma compra leve. Aproveite o evento!");
    }else if(total >= 100 && total < 200){
        printf("Voce comprou para curtir o fim de semana!");
    }else{
        printf("Voce fez uma grande compra! Divirta-se em todos os eventos!");
    }
}
    /*
    SE total < 100 ENTAO
    INICIO
        ESCREVA "xxxxx"
    FIM
    SENAO SE total >= 100 E total < 200 ENTAO
    INICIO
        ESCREVA "xxxxxx"
    FIM
    SENAO ENTAO
    INICIO
        ESCREVA "xxxxxxx"
    FIM

    SE em C é o if

    SENAO SE em C é o else if

    SENAO em C é o else
    */















