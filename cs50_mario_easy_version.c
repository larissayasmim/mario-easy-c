#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Pedir altura ao usuário
    int h;
    do

    {
        h = get_int("Height: \n");
    }
    while (h < 1 || h > 8);

    // Escrever a pirâmide
    int linha, espaço, coluna;
    for (linha = 0; linha < h; linha++)
    {
        //Espaço para alinhar a direita
        for (espaço = 0; espaço < h - linha - 1; espaço++)
        {
            printf(" ");
        }

        for (coluna = 0; coluna <= linha; coluna++)
        {
            printf("#");
        }
        printf("\n");
    }
}
