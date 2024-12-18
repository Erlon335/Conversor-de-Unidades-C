#include "velocidade.h"

void converter_velocidade(float metros_por_segundo)
{
    float km_por_hora = metros_por_segundo * 3.6;
    float milhas_por_hora = metros_por_segundo * 2.23694;

    printf("Velocidade:\n");
    printf("%.2f m/s = %.2f km/h\n", metros_por_segundo, km_por_hora);
    printf("%.2f m/s = %.2f mph\n", metros_por_segundo, milhas_por_hora);
}
