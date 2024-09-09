#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho = 0;
    int x = 1238, temp = x;
    float res;

    while (temp != 0)
    { // temporario pra preservar o valor de x
        temp = temp / 10;
        tamanho++;
    }

    int i = tamanho;
    float *digitos = (float *)malloc(tamanho * sizeof(float));
    int inteiro = 0;
    float decimal = 0;
    float div = (float)x;

    while (i < tamanho)
    {
        res = div / 10;
        inteiro = (int)res;
        decimal = res - inteiro;

        if (decimal < 1)
        {
            digitos[tamanho - 1] = decimal * 10;
        }
        digitos[i] = decimal * 10;
        div = (float)inteiro;
        i--;
    }

    for (int j = 0; j < tamanho; j++)
    {
        printf("%d, posição = %d\n", (int)digitos[j], j);
    }
    free(digitos);

    return 0;
}

// colocar criterio para quando for digitado valor negativo(testar *(-1)), criar segundo vetor
// para inverter  o valor do primeiro e comparar se eh palindromo, transformar em função
