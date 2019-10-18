#include <stdio.h>

int main(){

    int i, NumeroLesmas, velocidade, maior;

    scanf("%d", &NumeroLesmas);

    for(i=0; i < NumeroLesmas; i++){

        scanf("%d", &velocidade);

        if(i == 0){
            maior = velocidade;
        }

        if(velocidade > maior){
            maior = velocidade;
        }
    }

    if(maior < 10){
        printf("1\n");
    }

    if(maior >= 10 && maior < 20){
        printf("2\n");
    }

    if(maior >= 20){
        printf("3\n");
    }


return 0;
}