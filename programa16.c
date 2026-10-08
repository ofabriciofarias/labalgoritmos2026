/* LAÇO
*/
#include <stdio.h>

int main(){
    int i;

    printf("INICIO DO PROGRAMA\n");
    for(i = 0; i < 3; i++){
        printf("i = %d  -  i apresentado ao usuario = %d\n", i, (i+1));
        printf("Valor atual do i = %d\n", i);
    }
    printf("FIM DO PROGRAMA\n");
}
