#include "potencia.h"
#include <stdio.h>

float watts_to_kilowatts(float watts) {
    return watts / 1000.0;
}

float kilowatts_to_watts(float kilowatts) {
    return kilowatts * 1000.0;
}

float watts_to_horsepower(float watts) {
    return watts / 745.7;
}

float horsepower_to_watts(float horsepower) {
    return horsepower * 745.7;
}

float kilowatts_to_horsepower(float kilowatts) {
    return kilowatts * 1.34102;
}

float horsepower_to_kilowatts(float horsepower) {
    return horsepower / 1.34102;
}

void converterPotencia() {
    int choice;
    float value, result;

    printf("\nConversor de Unidades de Potência\n");
    printf("1. Watts (W) para Quilowatts (kW)\n");
    printf("2. Quilowatts (kW) para Watts (W)\n");
    printf("3. Watts (W) para Cavalos-vapor (cv/hp)\n");
    printf("4. Cavalos-vapor (cv/hp) para Watts (W)\n");
    printf("5. Quilowatts (kW) para Cavalos-vapor (cv/hp)\n");
    printf("6. Cavalos-vapor (cv/hp) para Quilowatts (kW)\n");
    printf("7. Voltar <-\n");
    printf("Escolha uma opcao (1-7): ");
    scanf("%d", &choice);

    if (choice == 7) {
        return;
    }

    printf("Insira o valor a ser convertido: ");
    scanf("%f", &value);

    switch (choice) {
        case 1:
            result = watts_to_kilowatts(value);
            printf("%.2f W equivale a %.2f kW\n", value, result);
            break;
        case 2:
            result = kilowatts_to_watts(value);
            printf("%.2f kW equivale a %.2f W\n", value, result);
            break;
        case 3:
            result = watts_to_horsepower(value);
            printf("%.2f W equivale a %.2f cv/hp\n", value, result);
            break;
        case 4:
            result = horsepower_to_watts(value);
            printf("%.2f cv/hp equivale a %.2f W\n", value, result);
            break;
        case 5:
            result = kilowatts_to_horsepower(value);
            printf("%.2f kW equivale a %.2f cv/hp\n", value, result);
            break;
        case 6:
            result = horsepower_to_kilowatts(value);
            printf("%.2f cv/hp equivale a %.2f kW\n", value, result);
            break;
        default:
            printf("Opcao invalida!\n");
    }
}
