#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3
#define AGUA 0
#define NAVIO 3

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    // Inicializa todas as posições do tabuleiro com água sendo representada por 0
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

    // Define as posições iniciais dos navios, nas partes horizontais e verticais 
    int linha_horizontal = 3;
    int coluna_horizontal = 7;

    int linha_vertical = 7;
    int coluna_vertical = 3;

    // Navio na horizontal 
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_horizontal][coluna_horizontal + i] = NAVIO;
    }

    // Navio na vertical
        for (int i = 0; i < TAMANHO_NAVIO; i++) {
            tabuleiro[linha_vertical + i][coluna_vertical] = NAVIO;
    }

    int linha_diagonal1 = 1;
    int coluna_diagonal1 = 1;

    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_diagonal1 + i][coluna_diagonal1 + i] = NAVIO;
    }

    int linha_diagonal2 = 0;
    int coluna_diagonal2 = 9;

    for (int j = 0; j < TAMANHO_NAVIO; j++) {
        tabuleiro[linha_diagonal2 + j][coluna_diagonal2 - j] = NAVIO;
    }
    
    // Exibe o tabuleiro com índice de colunas (j) e linhas (i) 
    printf("*** TABULEIRO DE BATALHA NAVAL ***\n");

    // Pontilhado de separação do título para o tabuleiro
    printf("--------------------------------\n"); 

    // Imprime cabeçalho do índice das colunas (j)
    for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
        printf("%2d ", j);
    }

        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
    }
    printf("\n ");

    // Imprime as linhas do índice das linhas (i) de A-J 
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        printf("%c", 'A' + i);  // Letra da linha
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%2d ", tabuleiro[i][j]);  // Conteúdo da célula
        }
        printf("\n ");
    }
    return 0;
}
