#include "massa.h"
#include <stdio.h>

void converterMassa() {
    int tipoUnidade;
    float entradaG;
    float entradaKg;
    float entradaT;

    printf("Digite o valor de entrada\n1 para gramas (g)\n2 para quilogramas (Kg)\n3 para toneladas (T)\n4 para voltar <-\n:");
    scanf("%d", &tipoUnidade);

    switch (tipoUnidade) {
        case 1:
            printf("Digite o valor em gramas: ");
            scanf("%f", &entradaG);
            printf("\nO valor equivalente em Kg eh: %.2f\n", entradaG / 1000);
            printf("O valor equivalente em T eh: %.2f\n", entradaG / 1000000);
            break;
        case 2:
            printf("Digite o valor em quilogramas: ");
            scanf("%f", &entradaKg);
            printf("\nO valor equivalente em g eh: %.2f\n", entradaKg * 1000);
            printf("O valor equivalente em T eh: %.2f\n", entradaKg / 1000);
            break;
        case 3:
            printf("Digite o valor em toneladas: ");
            scanf("%f", &entradaT);
            printf("\nO valor equivalente em g eh: %.2f\n", entradaT * 1000000);
            printf("O valor equivalente em Kg eh: %.2f\n", entradaT * 1000);
            break;
        case 4:
            break;
        default:
            printf("O valor digitado foi invalido.\n");
    }
}

int converterMassaMenu() {
    int escolha;
    do {
        printf("\nDigite 1 para converter unidades de massa.\nDigite 2 para sair\n:");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                converterMassa();
                break;
            case 2:
                break;
            default:
                printf("O valor digitado foi invalido.\n");
        }
    } while (escolha != 2);

    return 0;
}
