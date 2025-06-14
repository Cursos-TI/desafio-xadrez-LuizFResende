#include <stdio.h>

int main(){
//MOVIMENTACAO DA TORRE!

printf("TORRE SE MOVE\n\n");
   for (int torre = 1; torre <= 5; torre++){ //CONDICAO DE MOVIMENTO
      printf("Direita\n", torre);//DIRECAO DO MOVIMENTO
   }

//MOVIMENTACAO DA RAINHA!
printf("RAINHA SE MOVE\n\n");
 int rainha = 1;
   do{
      printf("Esquerda\n", rainha);
      rainha++;
   }while (rainha <= 8);

//MOVIMENTACAO DO BISPO
printf("BISPO SE MOVE\n\n");
int bispo = 1;
   while( bispo <= 5){//CONDICAO DE MOVIMENTO
         bispo++;
      printf("Cima Direita\n", bispo);//DIRECAO DO MOVIMENTO
   }



return 0 ;
}
