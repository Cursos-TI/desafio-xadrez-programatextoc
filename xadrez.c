#include <stdio.h>
int main() {
//Movimento da torre 5 casas para direita FOR
for(int i = 1; i <= 5; i++){
printf("Movimento da Torre:%d Cinco casas a direita\n",i);}

printf("\n*************************************\n");

//Movimento do bispo 5 casas na diagonal a direita
int i=1;
while(i<=5){
printf("Movimento do Bispo:casa %d na diagonal para cima/direita\n",i);
i++;}

printf("\n*************************************\n");

//reiniciar o 'i' para começar a contagem do 1
i=1;

//Movimento da rainha oito casas a esquerda
do{
printf("Movimento da Rainha:%d oito casas para esquerda\n",i);
i++;} 
while(i<=8);
printf("\n*************************************\n");
return 0;}
