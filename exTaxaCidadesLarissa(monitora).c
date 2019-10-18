#include
int main(){
int t, populacaoA, populacaoB, anos = 0, i;
float taxaA, taxaB;

scanf("%d", &t);

for (i = 0; i < t; i++){
scanf("%d %d %f %f", &populacaoA, &populacaoB, &taxaA, &taxaB);

while(populacaoA < populacaoB){
populacaoA = populacaoA * ((taxaA + 100) / 100);
populacaoB = populacaoB * ((taxaB + 100)/ 100);
anos++;
}

if (anos > 100){
printf("Mais de 1 seculo.\n");
}
else{
printf("%d anos.\n", anos);
}

anos = 0;
}

return 0;
}