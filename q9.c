#include <stdio.h>

void imprimirDezena(int num) {
    switch (num) {
        case 2:
            printf("vinte");
            break;
        case 3:
            printf("trinta");
            break;
        case 4:
            printf("quarenta");
            break;
        case 5:
            printf("cinquenta");
            break;
        case 6:
            printf("sessenta");
            break;
        case 7:
            printf("setenta");
            break;
        case 8:
            printf("oitenta");
            break;
        case 9:
            printf("noventa");
            break;
        default:
            break;
    }
}

void imprimirUnidade(int num) {
    switch (num) {
        case 1:
            printf("um");
            break;
        case 2:
            printf("dois");
            break;
        case 3:
            printf("três");
            break;
        case 4:
            printf("quatro");
            break;
        case 5:
            printf("cinco");
            break;
        case 6:
            printf("seis");
            break;
        case 7:
            printf("sete");
            break;
        case 8:
            printf("oito");
            break;
        case 9:
            printf("nove");
            break;
        default:
            break;
    }
}

int main() {
    int numero;

    // Passo 1: Solicitar ao usuário um número entre 0 e 99
    printf("Digite um numero entre 0 e 99: ");
    scanf("%d", &numero);

    // Passo 2: Verificar se o número está dentro do intervalo válido
    if (numero >= 0 && numero <= 99) {
        // Passo 3: Imprimir o número por extenso
        if (numero < 10) {
            imprimirUnidade(numero);
        } else if (numero < 20) {
            switch (numero) {
                case 10:
                    printf("dez");
                    break;
                case 11:
                    printf("onze");
                    break;
                case 12:
                    printf("doze");
                    break;
                case 13:
                    printf("treze");
                    break;
                case 14:
                    printf("catorze");
                    break;
                case 15:
                    printf("quinze");
                    break;
                case 16:
                    printf("dezesseis");
                    break;
                case 17:
                    printf("dezessete");
                    break;
                case 18:
                    printf("dezoito");
                    break;
                case 19:
                    printf("dezenove");
                    break;
                default:
                    break;
            }
        } else {
            int dezena = numero / 10;
            int unidade = numero % 10;
            imprimirDezena(dezena);
            if (unidade != 0) {
                printf(" e ");
                imprimirUnidade(unidade);
            }
        }
        printf("\n");
    } else {
        printf("Numero invalido.\n");
    }

    return 0;
}