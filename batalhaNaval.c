#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3
#define AGUA 0
#define NAVIO 3

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    // Inicializa todas as posições do tabuleiro com 0 (água)
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

    // Define as posições iniciais dos navios
    int linha_horizontal = 3;
    int coluna_horizontal = 7;

    int linha_vertical = 7;
    int coluna_vertical = 3;

    // Posiciona navio horizontalmente (na linha fixa, coluna aumenta)
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_horizontal][coluna_horizontal + i] = NAVIO;
    }

    // Posiciona navio verticalmente (na coluna fixa, linha aumenta)
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_vertical + i][coluna_vertical] = NAVIO;
    }

    // Exibe o tabuleiro com cabeçalho de colunas e letras nas linhas
    printf("*** TABULEIRO DE BATALHA NAVAL ***\n\n");

    // Imprime cabeçalho das colunas
    for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
        printf("%2d ", j);
    }

    for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
    }
    printf("\n");

    // Imprime as linhas com letras A–J
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        printf("%c", 'A' + i);  // Letra da linha
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%2d ", tabuleiro[i][j]);  // Conteúdo da célula
        }
        printf("\n");
    }

    return 0;
}
