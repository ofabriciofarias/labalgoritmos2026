#include <stdio.h>

int main(){
    int i;
    int vetor[6];

    for(i = 0; i < 6; i++){
        printf("Digite o valor para guardar na posicao %d do vetor = ", (i+1));
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < 6; i++){

        if(vetor[i]%2 == 0){ //RESTO(valor%2 == 0)
            printf("%d eh par\n", vetor[i]);
        }else{
            printf("%d eh impar\n", vetor[i]);
        }
    }
}
