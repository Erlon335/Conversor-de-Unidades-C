#include <stdio.h>

void celsius_para_fahrenheit_kelvin(float celsius) {
    float fahrenheit = (celsius * 9/5) + 32;
    float kelvin = celsius + 273.15;

    printf("\n%.2f Em celsius\n", celsius);
    printf("-> %.2f Em fahrenheit \n", fahrenheit);
    printf("-> %.2f Em Kelvin\n", kelvin);
}

void fahrenheit_para_celsius_kelvin(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5/9;
    float kelvin = celsius + 273.15;

    printf("\n%.2f Em fahrenheit\n", fahrenheit);
    printf("-> %.2f Em celsius\n", celsius);
    printf("-> %.2f Em Kelvin\n", kelvin);
}

void kelvin_para_celsius_fahrenheit(float kelvin) {
    float celsius = kelvin - 273.15;
    float fahrenheit = (celsius * 9/5) + 32;

    printf("\n%.2f Em kelvin \n", kelvin);
    printf("-> %.2f Em celsius \n", celsius);
    printf("-> %.2f Em fahrenheit  \n", fahrenheit);
}

int main() {
    int escolha;
    float temperatura;

    do {
        printf("\nEscolha a unidade de temperatura que deseja converter:");
        printf("\n1 - Celsius");
        printf("\n2 - Fahrenheit");
        printf("\n3 - Kelvin");
        printf("\n0 - Sair");
        printf("\n ");
        scanf("%d", &escolha);

        if (escolha == 0) {
            printf("Encerrando o programa...\n");
            break;
        }

        printf("Digite a temperatura: ");
        scanf("%f", &temperatura);

        switch (escolha) {
            case 1:
                celsius_para_fahrenheit_kelvin(temperatura);
                break;
            case 2:
                fahrenheit_para_celsius_kelvin(temperatura);
                break;
            case 3:
                kelvin_para_celsius_fahrenheit(temperatura);
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }

    } while (escolha != 0);

    return 0;
}