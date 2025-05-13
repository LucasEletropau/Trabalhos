#include <stdio.h>
#include <stdlib.h>

    /*
    Aluno: Lucas Gabriel Oio Domiciano
    Batalha Naval - Mestre.
    */

#define TAM 10
#define AGUA 0
#define NAVIO 3
#define HABILIDADE 5

void exibirTabuleiro(int tabuleiro[TAM][TAM]) {
    printf("\n TABULEIRO BATALHA NAVAL \n\n");
    printf("   ");
    for (int col = 0; col < TAM; col++) {
        printf("%2d ", col + 1);  // Números de 1 a 10
    }
    printf("\n");

    for (int lin = 0; lin < TAM; lin++) {
        printf("%2c ", 'A' + lin);  // Letras de A a J
        for (int col = 0; col < TAM; col++) {
            printf(" %d ", tabuleiro[lin][col]);
        }
        printf("\n");
    }
}

// Cone com origem no topo, expandindo para baixo
void aplicarCone(int tabuleiro[TAM][TAM], int origemLinha, int origemColuna) {
    int alcance = 2;
    for (int i = 0; i <= alcance; i++) {
        for (int j = -i; j <= i; j++) {
            int lin = origemLinha + i;
            int col = origemColuna + j;
            if (lin >= 0 && lin < TAM && col >= 0 && col < TAM) {
                if (tabuleiro[lin][col] == AGUA)
                    tabuleiro[lin][col] = HABILIDADE;
            }
        }
    }
}

// Cruz com origem no centro
void aplicarCruz(int tabuleiro[TAM][TAM], int origemLinha, int origemColuna) {
    int alcance = 2;
    for (int i = -alcance; i <= alcance; i++) {
        int lin = origemLinha + i;
        if (lin >= 0 && lin < TAM && tabuleiro[lin][origemColuna] == AGUA)
            tabuleiro[lin][origemColuna] = HABILIDADE;
    }
    for (int j = -alcance; j <= alcance; j++) {
        int col = origemColuna + j;
        if (col >= 0 && col < TAM && tabuleiro[origemLinha][col] == AGUA)
            tabuleiro[origemLinha][col] = HABILIDADE;
    }
}

// Octaedro (losango), com origem no centro
void aplicarOctaedro(int tabuleiro[TAM][TAM], int origemLinha, int origemColuna) {
    int alcance = 2;
    for (int i = -alcance; i <= alcance; i++) {
        for (int j = -alcance; j <= alcance; j++) {
            if (abs(i) + abs(j) <= alcance) {
                int lin = origemLinha + i;
                int col = origemColuna + j;
                if (lin >= 0 && lin < TAM && col >= 0 && col < TAM) {
                    if (tabuleiro[lin][col] == AGUA)
                        tabuleiro[lin][col] = HABILIDADE;
                }
            }
        }
    }
}

int main() {
    int tabuleiro[TAM][TAM] = {0}; // Inicializar com água (0)

    // Navios
    int linha_h = 2, coluna_h = 4;  // C5, C6, C7
    int linha_v = 5, coluna_v = 1;  // F2, G2, H2
    int linha_d = 7, coluna_d = 7;  // H8, G7, F6
    int linha_dd = 2, coluna_dd = 1; // C2, B3, A4

    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_h][coluna_h + i] = NAVIO;
        tabuleiro[linha_v + i][coluna_v] = NAVIO;
        tabuleiro[linha_d - i][coluna_d - i] = NAVIO;
        tabuleiro[linha_dd - i][coluna_dd + i] = NAVIO;
    }

    // Ativar habilidades centradas em E5 (linha 4, coluna 4)
    int origemLinha = 4;
    int origemColuna = 4;

    aplicarCone(tabuleiro, origemLinha, origemColuna);
    aplicarCruz(tabuleiro, origemLinha, origemColuna);
    aplicarOctaedro(tabuleiro, origemLinha, origemColuna);

    exibirTabuleiro(tabuleiro);

    return 0;
}