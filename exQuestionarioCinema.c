#include <stdio.h>

int main(){

    int i, Idade, Opiniao, QuantidadePessoas = 0;
    float mediaIdade = 0, PorcentP1 = 0, PorcentP2 = 0, PorcentP3 = 0, PorcentP4 = 0, PorcentP5 = 0;

    for(i = 0; ; i++){

        scanf("%d", &Idade);

        if(Idade < 0){
            break;
        }

        if(Idade >= 0){
            QuantidadePessoas++;
            mediaIdade += Idade;

            scanf("%d", &Opiniao);

            if(Opiniao <= 0 || Opiniao > 5){
                while(Opiniao <= 0 || Opiniao > 5){
                    scanf("%d", &Opiniao);
                }
            }

            if(Opiniao > 0 && Opiniao <= 5){
                if(Opiniao == 1){
                    PorcentP1++;
                }

                if(Opiniao == 2){
                    PorcentP2++;
                }

                if(Opiniao == 3){
                    PorcentP3++;
                }

                if(Opiniao == 4){
                    PorcentP4++;
                }

                if(Opiniao == 5){
                    PorcentP5++;
                }
            }

            
        }
    }

    mediaIdade = mediaIdade / QuantidadePessoas;
    PorcentP1 = (PorcentP1 * 100) / QuantidadePessoas;
    PorcentP2 = (PorcentP2 * 100) / QuantidadePessoas;
    PorcentP3 = (PorcentP3 * 100) / QuantidadePessoas;
    PorcentP4 = (PorcentP4 * 100) / QuantidadePessoas;
    PorcentP5 = (PorcentP5 * 100) / QuantidadePessoas;

    printf("qtde de participantes: %d\n", QuantidadePessoas);
    printf("idade media dos participantes: %.1f\n", mediaIdade);
    printf("Otimo: %.1f%%\n", PorcentP1);
    printf("Bom: %.1f%%\n", PorcentP2);
    printf("Regular: %.1f%%\n", PorcentP3);
    printf("Ruim: %.1f%%\n", PorcentP4);
    printf("Pessimo: %.1f%%\n", PorcentP5);


return 0;
}