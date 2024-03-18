#include <stdio.h>

int main() {
    int termos = 15;
    int primeiro = 0, segundo = 1, proximo;

    printf("Os %d primeiros termos da serie de Fibonacci sao:\n", termos);
    printf("%d, %d, ", primeiro, segundo);

    for (int i = 3; i <= termos; i++) {
        proximo = primeiro + segundo;
        printf("%d, ", proximo);
        primeiro = segundo;
        segundo = proximo;
    }

    printf("\n");

    return 0;
}