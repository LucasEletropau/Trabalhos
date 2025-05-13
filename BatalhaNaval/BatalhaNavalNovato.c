#include <stdio.h>

    /*
    Aluno: Lucas Gabriel Oio Domiciano
    Batalha Naval - Novato.
    */

#define TAM 10

void exibirTabuleiro(int tabuleiro[TAM][TAM]) {
    printf("\n TABULEIRO BATALHA NAVAL \n");
    printf("\n");
    printf("   ");
    for (int col = 0; col < TAM; col++) {
        printf("%2d ", col + 1);  //Números de 1 a 10
    }
    printf("\n");

    for (int lin = 0; lin < TAM; lin++) {
        printf("%2c ", 'A' + lin);  //Letras de A a J
        for (int col = 0; col < TAM; col++) {
            printf(" %d ", tabuleiro[lin][col]);
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAM][TAM] = {0}; //Inicializar todas as posições com 0

    //Definir posições iniciais dos navios
    int linha_h = 2, coluna_h = 4;  //Navio horizontal começa em C5 até C7
    int linha_v = 5, coluna_v = 1;  //Navio vertical começa em F2 até H2

    //Posição do navio horizontal de 3 posições
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_h][coluna_h + i] = 3;
    }

    //Posição do navio vertical de 3 posições
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_v + i][coluna_v] = 3;
    }

    // Exibição no tabuleiro
    exibirTabuleiro(tabuleiro);

    return 0;
}