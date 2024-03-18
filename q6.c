#include <stdio.h>

int main() {
    float num1, num2, num3;
    float maior, menor, intermediario;

    // Passo 1: Receber os três valores do usuário
    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);

    printf("Digite o segundo valor: ");
    scanf("%f", &num2);

    printf("Digite o terceiro valor: ");
    scanf("%f", &num3);

    // Passo 2: Determinar o maior valor
    if (num1 >= num2 && num1 >= num3) {
        maior = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        maior = num2;
    } else {
        maior = num3;
    }

    // Passo 3: Determinar o menor valor
    if (num1 <= num2 && num1 <= num3) {
        menor = num1;
    } else if (num2 <= num1 && num2 <= num3) {
        menor = num2;
    } else {
        menor = num3;
    }

    // Passo 4: Determinar o valor intermediário
    if ((num1 <= num2 && num1 >= num3) || (num1 >= num2 && num1 <= num3)) {
        intermediario = num1;
    } else if ((num2 <= num1 && num2 >= num3) || (num2 >= num1 && num2 <= num3)) {
        intermediario = num2;
    } else {
        intermediario = num3;
    }

    // Passo 5: Mostrar os resultados ao usuário
    printf("O maior valor: %.2f\n", maior);
    printf("O menor valor: %.2f\n", menor);
    printf("O valor intermediario: %.2f\n", intermediario);

    return 0;
}