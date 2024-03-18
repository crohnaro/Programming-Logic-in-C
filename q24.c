#include <stdio.h>

// Função para calcular o MDC usando o método de Euclides
int calcularMDC(int a, int b) {
    int resto;

    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }

    return a;
}

int main() {
    int numero1, numero2, mdc;

    do {
        // Passo 1: Receber dois números do usuário
        printf("Digite dois numeros (0 0 para sair): ");
        scanf("%d %d", &numero1, &numero2);

        // Passo 2: Verificar se os números são diferentes de zero
        if (numero1 != 0 || numero2 != 0) {
            // Passo 3: Calcular o MDC e mostrar o resultado
            mdc = calcularMDC(numero1, numero2);
            printf("O MDC de %d e %d eh: %d\n", numero1, numero2, mdc);
        }
    } while (numero1 != 0 || numero2 != 0);

    return 0;
}
