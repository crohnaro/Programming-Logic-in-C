#include <stdio.h>

int main() {
    int x, y, z;

    // Passo 1: Receber os valores dos lados do usuário
    printf("Digite o valor do lado X: ");
    scanf("%d", &x);

    printf("Digite o valor do lado Y: ");
    scanf("%d", &y);

    printf("Digite o valor do lado Z: ");
    scanf("%d", &z);

    // Passo 2: Verificar se os valores podem formar um triângulo
    if (x + y > z && x + z > y && y + z > x) {
        // Os valores formam um triângulo
        if (x == y && y == z) {
            printf("Os valores formam um triangulo equilatero.\n");
        } else if (x == y || x == z || y == z) {
            printf("Os valores formam um triangulo isosceles.\n");
        } else {
            printf("Os valores formam um triangulo escaleno.\n");
        }
    } else {
        printf("Os valores fornecidos nao podem formar um triangulo.\n");
    }

    return 0;
}