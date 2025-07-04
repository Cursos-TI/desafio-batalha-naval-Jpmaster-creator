#include <stdio.h>

int main()
{
    int tabuleiro[10][10] = {0};

    // Cabeçalho de letras.
    printf("   ");
    for (char letra = 'A'; letra <= 'J'; letra++)
    {
        printf(" %c", letra);
    }
    printf("\n");

    // Este loop posiciona um "navio" horizontal no tabuleiro.
    //  Ele preenche as colunas 3, 4 e 5 da linha 2 com o valor 3.
    for (int j = 3; j < 6; j++)
    {
        tabuleiro[2][j] = 3;
    }

    // Este loop posiciona um "navio" vertical no tabuleiro.
    // Ele preenche as linhas 5, 6 e 7 da coluna 7 com o valor 3.
    for (int i = 5; i < 8; i++)
    {
        tabuleiro[i][7] = 3;
    }

    // Loop externo para percorrer cada linha do tabuleiro.
    for (int i = 0; i < 10; i++)
    {
        printf("%2d ", i + 1);       // i + 1 para mostrar números de 1 a 10 em vez de 0 a 9.
        for (int j = 0; j < 10; j++) // Loop interno para percorrer cada coluna da linha atual.
        {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}