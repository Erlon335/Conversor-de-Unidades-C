#include "area.h"

double metroQuadradoParaCentimetroQuadrado(double metros) {
    return metros * 10000;
}

double centimetroQuadradoParaMetroQuadrado(double centimetros) {
    return centimetros / 10000;
}

void converterArea() {
    int opcao;
    double valor, resultado;
    char continuar;

    do {
        printf("\nConversor de Unidades de Area\n");
        printf("Escolha uma opcao:\n");
        printf("1. Converter de metros quadrados para centimetros quadrados\n");
        printf("2. Converter de centimetros quadrados para metros quadrados\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite o valor em metros quadrados: ");
            scanf("%lf", &valor);
            resultado = metroQuadradoParaCentimetroQuadrado(valor);
            printf("%.2lf metros quadrados equivalem a %.2lf centimetros quadrados.\n", valor, resultado);
        } else if (opcao == 2) {
            printf("Digite o valor em centimetros quadrados: ");
            scanf("%lf", &valor);
            resultado = centimetroQuadradoParaMetroQuadrado(valor);
            printf("%.2lf centimetros quadrados equivalem a %.2lf metros quadrados.\n", valor, resultado);
        } else {
            printf("Opcao invalida.\n");
        }

        printf("\nDeseja fazer outra conversao? (s/n): ");
        scanf(" %c", &continuar); 
    } while (continuar == 's' || continuar == 'S');

    printf("Encerrando o conversor de unidades de area. Ate logo!\n");
}
