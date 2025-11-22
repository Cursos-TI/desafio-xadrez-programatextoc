#include <stdio.h>
void moverTorre(int Torre){
if(Torre>0){
moverTorre(Torre-1);
printf("%d Movimento da Torre para direita:\n",Torre);}}

void moverRainha(int Rainha){
if(Rainha>0){
moverRainha(Rainha-1);
printf("%d Movimento da rainha para esquerda:\n",Rainha);}}

void moverBispo(int Bispo, int direita){
if(Bispo>0,direita>0){
moverBispo(Bispo-1,direita-1);
printf("%d Movimento do Bispo superior diagonal,%d direita:\n",Bispo,direita);}}

void moverCavalo(){
int verticais=2;
int horizontais=1;

printf("Movimento do cavalo com break e continue(2 casas para baixo, 1 para esquerda:)\n\n");
printf("Movimento 1: Movimento vertical(%d casas)\n",verticais);

//simulação movimento vertical
for(int vertical=1;vertical<=verticais;vertical++){
printf("%d:Movimento para baixo\n",vertical);}

printf("\n**********************************************\n");

//simulação movimento horizontal
printf("Movimento 2:(%d casa perpendicular) Movimento horizontal para esquerda\n",horizontais);
for(int horizontal=1;horizontal<=5;horizontal++){
if(horizontal>horizontais){
printf("\n************************************************\n");
printf("[break:O movimento horizontal de 1 passo foi concluido. sair]\n");

break;}}}

int main(){
//Movimento da torre 5 casas para direita recursiva:
moverTorre(5);
printf("\n*************************************\n");

//Movimento da Rainha 8 casas para esquerda Recursiva:
moverRainha(8);
printf("\n*****************************************\n");

//Movimento do bispo 5 casas na diagonal a direita
moverBispo(5,5);
printf("*******************************************\n");

//Movimento do cavalo em L:
moverCavalo();
printf("\n*****************************************\n");
return 0;}
