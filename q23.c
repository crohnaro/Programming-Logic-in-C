#include <stdio.h>
#include <math.h>

int main() {
    int numero, i;

    // Passo 1: Receber o número do usuário
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    // Passo 2: Decompor em fatores primos
    printf("Fatores primos de %d: ", numero);

    while (numero % 2 == 0) {
        printf("%d ", 2);
        numero /= 2;
    }

    for (i = 3; i <= sqrt(numero); i += 2) {
        while (numero % i == 0) {
            printf("%d ", i);
            numero /= i;
        }
    }

    if (numero > 2) {
        printf("%d ", numero);
    }

    printf("\n");

    return 0;
}
