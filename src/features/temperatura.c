#include <stdio.h>
#include "../include/temperatura.h"

void celsiusParaFahrenheitKelvin(float celsius) {
    float fahrenheit = (celsius * 9 / 5) + 32;
    float kelvin = celsius + 273.15;

    printf("\n%.2f em Celsius\n", celsius);
    printf("-> %.2f em Fahrenheit\n", fahrenheit);
    printf("-> %.2f em Kelvin\n", kelvin);
}

void fahrenheitParaCelsiusKelvin(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5 / 9;
    float kelvin = celsius + 273.15;

    printf("\n%.2f em Fahrenheit\n", fahrenheit);
    printf("-> %.2f em Celsius\n", celsius);
    printf("-> %.2f em Kelvin\n", kelvin);
}

void kelvinParaCelsiusFahrenheit(float kelvin) {
    float celsius = kelvin - 273.15;
    float fahrenheit = (celsius * 9 / 5) + 32;

    printf("\n%.2f em Kelvin\n", kelvin);
    printf("-> %.2f em Celsius\n", celsius);
    printf("-> %.2f em Fahrenheit\n", fahrenheit);
}

int converterTemperatura() {
    int escolha;
    float temperatura;

    do {
        printf("\nEscolha a unidade de temperatura que deseja converter:");
        printf("\n1 - Celsius");
        printf("\n2 - Fahrenheit");
        printf("\n3 - Kelvin");
        printf("\n0 - Sair");
        printf("\n");
        scanf("%d", &escolha);

        if (escolha == 0) {
            printf("Encerrando o conversor de unidades de temperatura. Ate mais!\n");
            break;
        }

        printf("Digite a temperatura: ");
        scanf("%f", &temperatura);

        switch (escolha) {
            case 1:
                celsiusParaFahrenheitKelvin(temperatura);
                break;
            case 2:
                fahrenheitParaCelsiusKelvin(temperatura);
                break;
            case 3:
                kelvinParaCelsiusFahrenheit(temperatura);
                break;
            default:
                printf("Opção invalida! Tente novamente.\n");
        }
    } while (escolha != 0);

    return 0;
}
