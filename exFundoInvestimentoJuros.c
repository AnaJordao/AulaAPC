#include <stdio.h>

int main(){

    int i;
    double deposito, TotalDepositado = 0, RendimentoMensal = 0, RendimentoTotal = 0, lucro = 0;

    for(i = 1; i <= 12; i++){

        scanf("%lf", &deposito);
        TotalDepositado += deposito;
        RendimentoTotal += deposito;

        if(TotalDepositado >= 10000){
            
            RendimentoTotal += RendimentoTotal * 0.0225;

            
        }
        else{
            
            RendimentoTotal += RendimentoTotal * 0.0175;
            
        }
        
    }

    
    
    lucro = RendimentoTotal - TotalDepositado;
    printf("%.2f\n", lucro);

return 0;
}