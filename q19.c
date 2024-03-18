#include <stdio.h>

int main() {
    int numero, soma_divisores;

    printf("Numeros perfeitos entre 1 e 100:\n");

    for (numero = 1; numero <= 100; numero++) {
        soma_divisores = 0;

        // Verifica divisores do número
        for (int i = 1; i <= numero / 2; i++) {
            if (numero % i == 0) {
                soma_divisores += i;
            }
        }

        // Verifica se o número é perfeito
        if (soma_divisores == numero) {
            printf("%d\n", numero);
        }
    }

    return 0;
}