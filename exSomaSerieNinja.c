#include <stdio.h>

int main(){

    long int N, soma = 0;
    int i, j;
   
    scanf("%ld", &N);
    int str[N];
    str[0] = 2;
    str[1] = 7;
    str[2] = 3;

    if(N % 3 != 0){
        printf("SEM SOMA\n");
    }

    for(i=3; i <= N; i+=3){
        for(j = i; j <= i + 2; j++){
            if(j==i){
                str[j] = str[j - 3] * 2;
            }
            if(j == i + 1){
                str[j] = str[j - 3] * 3;
            }
            if(j == i + 2){
                str[j] = str[j - 3] * 4;
            }
        }
    }

    for(i = 0; i < N; i ++){
        soma = soma + str[i];  
    }

    if(N % 3 == 0){
        printf("%ld\n", soma);
    }

return 0;
}