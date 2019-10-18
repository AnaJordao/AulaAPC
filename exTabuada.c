#include <stdio.h>

int main(){

    int N, i, multiplicacao;

    scanf("%d", &N);

    for(i = 0; i < 10; i++){

        multiplicacao = N * (i+1);
        printf("%dx%d=%d\n", N, i+1, multiplicacao);
    }

return 0;
}