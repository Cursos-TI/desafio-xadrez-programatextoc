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

//Movimento do cavalo FOR
int CasasParaBaixo=2;
int CasasParaEsquerda=1;

printf("Movimento do cavalo:L em FOR 2 casas para baixo e +1 para esquerda\n");

printf("\n**************************\n");

printf("Movimento 1: Movimento vertical(2 casas)\n");
for(int x=1; x<=CasasParaBaixo; x++){
printf("%d: Movimentos para baixo\n",x);
if(x==CasasParaBaixo){

printf("\n*************************************\n");

printf("Movimento 2: Movimento horizontal(1 casa perpendicular)\n");
for( int z=0; z<CasasParaEsquerda; z++){
printf("Passo final: Movendo para esquerda\n");}}}

printf("\***************************************\n");

printf("Movimento do cavalo em FOR completo\n");
printf("\n***************************************\n");

//Movimento do cavalo while
int casasparabaixo=2;
int casaparaesquerda=1;

printf("Movimento do cavalo:L em WHILE 2 casas para baixo e +1 para esquerda\n");
printf("\n**************************\n");

printf("Movimento 1: Movimento vertical(2 casas)\n");
int a=1;
while(a<=casasparabaixo){
printf("%d: Movimentos para baixo\n",a);
if(a==CasasParaBaixo){
printf("\n*******************************************\n");

printf("Movimento 2: Movimento horizontal(1 casa perpendicular)\n");
int b=0;
while(b<casaparaesquerda){
printf("Passo final: Movendo para esquerda\n");
b++;}}
a++;}
printf("\n************************************\n");
printf("Movimento do cavalo WHILE completo\n");
printf("\n************************************\n");

return 0;}
