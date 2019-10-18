#include <stdio.h>

int main(){

int i;
double peso, soma = 0;

for(i = 0; i < 25; i++){

    scanf("%lf", &peso);
    soma += peso;
}

printf("%.1lf\n", soma);

return 0;
}