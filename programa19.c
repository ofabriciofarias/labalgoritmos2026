#include <stdio.h>
//Encontre o maior e menor valor do vetor.
int main(){
    int i;
    float alturas[5];
    float soma, media;
    float maior, menor;

    for(i = 0; i < 5; i++){
        printf("alturas[%d] = ", (i+1));
        scanf("%f", &alturas[i]);
    }
    maior = alturas[0];
    menor = alturas[0];
    printf("\n\n\n");
    for(i = 0; i < 5; i++){

        if(maior < alturas[i]){
            maior = alturas[i];
        }
        if(menor > alturas[i]){
            menor = alturas[i];
        }

        printf("alturas[%d] = %.2f\n", (i+1), alturas[i]);
    }
    printf("\n\nMenor Altura = %f\n", menor);
    printf("Maior Altura = %f\n", maior);
}
