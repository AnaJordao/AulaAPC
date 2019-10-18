#include <stdio.h>

int main(){

    int i, TCasosTeste, TempoAnos = 0, PA = 0, PB = 0;
    float G1 = 0, G2 = 0; 
    

    scanf("%d", &TCasosTeste);

    for(i = 0; i < TCasosTeste; i++){

        TempoAnos = 0;
        scanf("%d %d %f %f", &PA, &PB, &G1, &G2);
        
        
        while(PA < PB && TempoAnos <= 100){

            PA = PA * (G1 + 100) / 100.0;
            PB = PB * (G2 + 100) / 100.0;
            TempoAnos++;
            
        }
        
        if(TempoAnos <= 100){
            printf("%d anos.\n", TempoAnos);
        }

        if(TempoAnos > 100){
            printf("Mais de 1 seculo.\n");
        }
    }

return 0;
}