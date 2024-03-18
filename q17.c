#include <stdio.h>

int main() {
    int numero, soma, quadrado;

    printf("Números de 4 algarismos com a mesma característica do número 3025:\n");

    for (int i = 1000; i <= 9999; i++) {
        numero = i;
        soma = numero / 100 + numero % 100;
        quadrado = soma * soma;

        if (quadrado == numero) {
            printf("%d\n", numero);
        }
    }

    return 0;
}