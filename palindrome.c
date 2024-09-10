#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho = 0;
    int x = 345, temp = x;
    float res;

    while (temp != 0)
    { // temporario pra preservar o valor de x
        temp = temp / 10;
        tamanho++;
        printf("tamanho = %d\n", tamanho);
    }

    if (x < 0) { //mudou valor de x para positivo
        x = x*(-1);
    }

    printf("valor de x = %d\n", x);

    int i = 0;
    float *digitos = (float *)malloc(tamanho * sizeof(float));
    float *digitos_invertidos = (float *) malloc (tamanho * sizeof(float));
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
        i++;
        printf("posição i = %d\n", i);
    }

    int k = tamanho;
    while (k >= 0) {
        // digitos_invertidos[k] = 

    
        k--;
        printf("valor de k = %d", k);
    }

    for (int j = 0; j < tamanho; j++)
    {
        printf("%d, posicao = %d\n", (int)digitos[j], j);
    }
    free(digitos);

    return 0;
}

// colocar criterio para quando for digitado valor negativo(testar *(-1)), criar segundo vetor
// para inverter  o valor do primeiro e comparar se eh palindromo, transformar em função
