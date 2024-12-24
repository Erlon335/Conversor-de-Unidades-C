#include "dados.h"

void converter_megabytes(double megabytes)
{
    double bits = megabytes * 1024 * 1024 * 8;
    double bytes = megabytes * 1024 * 1024;
    double kilobytes = megabytes * 1024;
    double gigabytes = megabytes / 1024;
    double terabytes = megabytes / (1024 * 1024);

    printf("Conversão de %.2f MB:\n", megabytes);
    printf("Bits: %.2lf\n", bits);
    printf("Bytes: %.2lf\n", bytes);
    printf("Kilobytes (KB): %.2lf\n", kilobytes);
    printf("Gigabytes (GB): %.6lf\n", gigabytes);
    printf("Terabytes (TB): %.9lf\n", terabytes);
}