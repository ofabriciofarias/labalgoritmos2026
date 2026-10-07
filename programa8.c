#include <stdio.h>

int main(){ //ALGORTIMO
    int codigo, qtd, aux; //DECLARE codigo, qtd, aux NUMERICO
    float total; //DECLARE total NUMERICO

    aux = 1;

    while(aux == 1) //ENQUANTO aux == 1 FAÇA
    { //INICIO
        printf("MENU DE OPCOES\n");
        printf("Suco de Laranja - 200 - R$ 3,50\n");
        printf("Suco de Uva     - 201 - R$ 3,80\n");
        printf("Refrigerante    - 202 - R$ 2,50\n");
        printf("Agua Mineral    - 203 - R$ 1,20\n");
        printf("Cha Gelado      - 204 - R$ 2,30\n");
        printf("Cafe            - 205 - R$ 1,50\n");
        printf("Digite sua escolha = ");
        scanf("%d", &codigo); //LEIA codigo

        if(codigo >= 200 && codigo <= 205){
            printf("Digite a quantidade = ");
            scanf("%d", &qtd);
            aux = 0;

            if(codigo == 200)
                total = qtd * 3.5;
            else if(codigo == 201)
                total = qtd * 3.8;
            else if(codigo == 202)
                total = qtd * 2.5;
            else if(codigo == 203)
                total = qtd * 1.2;
            else if(codigo == 204)
                total = qtd * 2.3;
            else if(codigo = 205)
                total = qtd * 1.5;

        }else{
            printf("Codigo Invalido, tente outra vez\n");
        }
    } //FIM_ENQUANTO

    printf("Valor total da Compra\n");
    printf("Total R$ %.2f\n", total);
}//FIM_ALGORITMO


/*
    ENQUANTO condicao for verdadeira
        INICIO
            Fica no laço
        FIM

        ENQUANTO == while
*/
