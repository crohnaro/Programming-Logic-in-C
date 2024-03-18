#include <stdio.h>

int main() {
    int mes, ano, dias;

    // Passo 1: Receber o mês e o ano do usuário
    printf("Digite o mes (de 1 a 12): ");
    scanf("%d", &mes);

    printf("Digite o ano (de 0 D.C. em diante): ");
    scanf("%d", &ano);

    // Passo 2: Calcular o número de dias do mês especificado
    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            dias = 31;
            break;
        case 4: case 6: case 9: case 11:
            dias = 30;
            break;
        case 2:
            // Verificar se o ano é bissexto
            if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
                dias = 29;
            } else {
                dias = 28;
            }
            break;
        default:
            printf("Mes invalido.\n");
            return 1; // Retorna 1 para indicar erro
    }

    // Passo 3: Mostrar o número de dias para o usuário
    printf("O mes %d do ano %d tem %d dias.\n", mes, ano, dias);

    return 0;
}