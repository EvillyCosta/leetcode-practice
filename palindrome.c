#include <stdio.h>
#include <stdlib.h>

int isPalindrome(int x) {
    int tamanho= 0, temp = x;
    int k, cont = 0;

    while (temp != 0) //poderia usar sizeof ao inves de achar o tamanho assim
    { // temporario pra preservar o valor de x
        temp = temp / 10;
        tamanho++;
    }
    float *digitos = (float *)malloc(tamanho * sizeof(float));
    float *digitos_invertidos = (float *) malloc (tamanho * sizeof(float));

    if (x < 0) { 
        return 0;
    }

    int div = x;
    for (int i = 0, k = tamanho - 1; i < tamanho && k >= 0; i++, k--) {
        digitos[i] = div % 10; //recebe o ultimo digito
        digitos_invertidos[k] = digitos[i]; 
        div = div/10; //vai removendo o ultimo digito 
    }
    for (int j = 0; j < tamanho; j++)
    {
        if ((int)digitos_invertidos[j] == (int)digitos[j]) {
            cont++;
        }
    }

    free(digitos);
    free(digitos_invertidos);

    if (cont == tamanho) {
        return 1;
    }

    return 0;

}

int main () {
    int n = -121;

    if (isPalindrome(n)) {
        printf("eh palindromo");
    } else {
        printf("nao eh palindromo");
    }
}
