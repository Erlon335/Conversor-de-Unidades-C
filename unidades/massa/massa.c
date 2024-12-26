#include "massa.h"
#include <stdio.h>

void converterMassa() {
    int tipoUnidade;
    float entradaKg;
    float entradaG;
    float entradaLb;

    printf("Digite o valor de entrada\n1 para quilograma (kg)\n2 para grama (g)\n3 para libra (lb)\n4 para voltar <-\n:");
    scanf("%d", &tipoUnidade);

    switch (tipoUnidade) {
        case 1:
            printf("Digite o valor em quilogramas: ");
            scanf("%f", &entradaKg);
            printf("\nO valor equivalente em gramas eh: %.2f\n", entradaKg * 1000);
            printf("O valor equivalente em libras eh: %.2f\n", entradaKg * 2.20462);
            break;
        case 2:
            printf("Digite o valor em gramas: ");
            scanf("%f", &entradaG);
            printf("\nO valor equivalente em quilogramas eh: %.2f\n", entradaG / 1000);
            printf("O valor equivalente em libras eh: %.2f\n", entradaG * 0.00220462);
            break;
        case 3:
            printf("Digite o valor em libras: ");
            scanf("%f", &entradaLb);
            printf("\nO valor equivalente em quilogramas eh: %.2f\n", entradaLb / 2.20462);
            printf("O valor equivalente em gramas eh: %.2f\n", entradaLb * 453.592);
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
