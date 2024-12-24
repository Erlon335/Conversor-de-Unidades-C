#include <stdio.h>

// Função para converter de metro quadrado para centímetro quadrado
double metroQuadradoParaCentimetroQuadrado(double metros) {
    return metros * 10000;
}

// Função para converter de centímetro quadrado para metro quadrado
double centimetroQuadradoParaMetroQuadrado(double centimetros) {
    return centimetros / 10000;
}

double converterArea() {
    int opcao;
    double valor, resultado;

    printf("Conversor de Unidades de Área\n");
    printf("Escolha uma opção:\n");
    printf("1. Converter de metros quadrados para centímetros quadrados\n");
    printf("2. Converter de centímetros quadrados para metros quadrados\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Digite o valor em metros quadrados: ");
        scanf("%lf", &valor);
        resultado = metroQuadradoParaCentimetroQuadrado(valor);
        printf("%.2lf metros quadrados equivalem a %.2lf centímetros quadrados.\n", valor, resultado);
    } else if (opcao == 2) {
        printf("Digite o valor em centímetros quadrados: ");
        scanf("%lf", &valor);
        resultado = centimetroQuadradoParaMetroQuadrado(valor);
        printf("%.2lf centímetros quadrados equivalem a %.2lf metros quadrados.\n", valor, resultado);
    } else {
        printf("Opção inválida.\n");
    }

    return 0;
}