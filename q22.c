#include <stdio.h>

int main() {
    int dividendo, divisor, quociente = 0, resto;

    // Passo 1: Receber os números inteiros do usuário
    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);

    printf("Digite o divisor: ");
    scanf("%d", &divisor);

    // Passo 2: Calcular o quociente e o resto
    resto = dividendo;

    while (resto >= divisor) {
        resto -= divisor;
        quociente++;
    }

    // Passo 3: Mostrar o resultado ao usuário
    printf("Quociente: %d\n", quociente);
    printf("Resto: %d\n", resto);

    return 0;
}
