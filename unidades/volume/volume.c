#include "volume.h"
#include <stdio.h>

void converterVolume() {
    int tipoUnidade;
    float entradaL;
    float entradaMl;
    float entradaM3;

    printf("Digite o valor de entrada\n1 para litro (l)\n2 para mililitro (ml)\n3 para metro cubico (m3)\n4 para voltar <-\n:");
    scanf("%d", &tipoUnidade);

    switch (tipoUnidade) {
        case 1:
            printf("Digite o valor em litros: ");
            scanf("%f", &entradaL);
            printf("\nO valor equivalente em ml eh: %.2f\n", entradaL * 1000);
            printf("O valor equivalente em m3 eh: %.6f\n", entradaL / 1000);
            break;
        case 2:
            printf("Digite o valor em mililitros: ");
            scanf("%f", &entradaMl);
            printf("\nO valor equivalente em l eh: %.2f\n", entradaMl / 1000);
            printf("O valor equivalente em m3 eh: %.6f\n", entradaMl / 1000000);
            break;
        case 3:
            printf("Digite o valor em metros cubicos: ");
            scanf("%f", &entradaM3);
            printf("\nO valor equivalente em l eh: %.2f\n", entradaM3 * 1000);
            printf("O valor equivalente em ml eh: %.2f\n", entradaM3 * 1000000);
            break;
        case 4:
            break;
        default:
            printf("O valor digitado foi invalido.\n");
    }
}

int converterVolumeMenu() {
    int escolha;
    do {
        printf("\nDigite 1 para converter unidades de volume.\nDigite 2 para sair\n:");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                converterVolume();
                break;
            case 2:
                break;
            default:
                printf("O valor digitado foi invalido.\n");
        }
    } while (escolha != 2);

    return 0;
}
