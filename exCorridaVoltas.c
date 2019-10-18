#include <stdio.h>

int main(){

    int i, tempo, MelhorVolta = 0, PiorVolta = 0, MelhorIndice = 0, PiorIndice = 0, TempoTotal = 0, penalidade = 0;

    for(i = 1; ; i++){

        scanf("%d", &tempo);

        if(tempo == 0){
            break;
        }
        
        

                if(i == 1){
                    MelhorVolta = tempo;
                    PiorVolta = tempo;
                    MelhorIndice = i;
                    PiorIndice = i;
                }

                if(tempo < 0){
                    penalidade = tempo;
                    i--;
                }
                else{

                    if(tempo > 0){
                        tempo -= penalidade;
                        TempoTotal += tempo;
                        penalidade = 0;
                    }

                    if(tempo < MelhorVolta && tempo > 0){
                        MelhorVolta = tempo;
                        MelhorIndice = i;
                    }

                    if(tempo > PiorVolta && tempo > 0){
                        PiorVolta = tempo;
                        PiorIndice = i;
                    }

                    
                }
        
        
    }

    printf("Melhor volta: %d - %d seg\n", MelhorIndice, MelhorVolta);
    printf("Pior volta: %d - %d seg\n", PiorIndice, PiorVolta);
    printf("Tempo total: %d seg\n", TempoTotal);

return 0;
}