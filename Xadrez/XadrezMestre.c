#include <stdio.h>

    /*
    Aluno: Lucas Gabriel Oio Domiciano
    Xadrez - Mestre.
    */

//Movimento Torre usando recursividade
void movimentoTorre(int casas){
    if (casas > 0){
    printf("Torre anda para direita\n");
    movimentoTorre(casas - 1);
    printf("\n");
    }
}

//Movimento Bispo usando recursividade
void movimentoBispo(int casas){
    if (casas > 0){
    printf("Bispo anda para diagonal direita cima\n");
    movimentoBispo(casas - 1);
    printf("\n");
    }
}

//Movimento Rainha usando recursividade
void movimentoRainha(int casas){
    if (casas > 0){
    printf("Rainha anda para esquerda\n");
    movimentoRainha(casas - 1);
    }
}

int main(){

    movimentoTorre(5); //5 casas para direita
    movimentoBispo(5); //5 casas para diagonal direita cima
    movimentoRainha(8); //8 casas para esquerda

//Movimento Bispo usando loop aninhados
printf("\n*Movimento do Bispo*\n");
    int linha = 0, coluna = 0;
    //Linha "Esqueda" Coluna "Direita"
    int contador = 1;
    while (contador <= 5){
        linha++; //Esquerda
        coluna++; //Direita
        contador++;
        printf("Bispo anda para diagonal\n");
    }

    //Movimento do cavalo usando loop complexos com varações multiplas usando continue e break
    printf("\n*Moviemnto do Cavalo*\n");
     for (int x = 1, a = 0; x < 2, a < 2; x++, a++){
        if (x == 0)
       continue;
       if (x == 3)
        break;
        printf("\nCavalo anda para cima");

        if (a == 0)
        continue;
        if (a == 2)
        break;
        printf("\nCavalo anda para direita");
     }

    return 0;
}