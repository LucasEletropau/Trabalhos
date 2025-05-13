#include <stdio.h>

int main(){

    int i;

    /*
    Aluno: Lucas Gabriel Oio Domiciano
    Xadrez - Aventureiro.
    */

    //Torre movendo 5 casas para cima usando o "for"
    printf("*Movimento da Torre*\n");
    for (i = 1; i <= 5; i++){
        printf("Torre anda para cima %d\n", i);
    }

    //Bispo movendo 5 casas para diagonal usando o "while"
    printf("\n*Movimento do Bispo*\n");
    int linha = 0, coluna = 0;
    //Linha "Esqueda" Coluna "Direita"
    int contador = 1;
    while (contador <= 5){
        linha++; //Esquerda
        coluna++; //Direita
        contador++;
        printf("Bispo anda para diagonal (%d, %d)\n", linha, coluna);
    }

    //Rainha movendo 8 casas para esquerda usando o "do-while"
    printf("\n*Movimente da Rainha*\n");
    int pos = 1;
    do {
        printf("Rainha anda para esquerda %d\n", pos);
        pos++;
    } while (pos <= 8);


    //Cavalo movendo 2 casas para baixo e 1 para esquerda usando o "for" e "while"
      printf("\n*Movimento do Cavalo*\n");
      
      int c = 1;

      while(c--){
        for(int j = 0; j < 2; j++){
            printf("Cavalo anda para baixo\n");
        }
        printf("Cavalo anda para esquerda\n");
      }


    return 0;
}