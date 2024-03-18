#include <stdio.h>

int main() {
    int idade_A, idade_B;

    for (idade_A = 1; idade_A < 100; idade_A++) {
        for (idade_B = 1; idade_B < 100; idade_B++) {
            // Verifica se A tem o dobro da idade que B tinha quando A tinha a idade que B tem
            if (2 * (idade_B - (idade_A - idade_B)) == idade_A) {
                // Verifica se quando B tiver a idade de A, somarão 81 anos
                if (idade_A + (idade_A - idade_B) == 81) {
                    printf("Idade de A: %d anos\n", idade_A);
                    printf("Idade de B: %d anos\n", idade_B);
                    return 0;
                }
            }
        }
    }

    printf("Não foi possível encontrar as idades que satisfazem as condições.\n");
    return 0;
}
