#include <stdio.h>

int main() {
    int num1, num2, num3;
    float media;

    // Passo 1: Receber os três valores inteiros do usuário
    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &num2);

    printf("Digite o terceiro valor inteiro: ");
    scanf("%d", &num3);

    // Passo 2: Calcular a média
    media = (num1 + num2 + num3) / 3.0; // Usamos 3.0 para forçar a divisão como ponto flutuante

    // Passo 3: Mostrar a média ao usuário
    printf("A media dos tres valores e: %.2f\n", media);

    return 0;
}