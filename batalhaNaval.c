#include <stdio.h>

int main() {
    // Declarando e inicializando a matriz do tabuleiro
    int tabuleiro[10][10] = {0};

    // Coordenadas e tamanho dos navios
    int tamanho_navio = 3;

    // Navio 1 (horizontal)
    int linha1 = 2, coluna1 = 3; // Coordenadas iniciais
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[linha1][coluna1 + i] = 3;
    }

    // Navio 2 (vertical)
    int linha2 = 5, coluna2 = 7; // Coordenadas iniciais
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[linha2 + i][coluna2] = 3;
    }

    // Exibindo o tabuleiro
    printf("Tabuleiro:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}