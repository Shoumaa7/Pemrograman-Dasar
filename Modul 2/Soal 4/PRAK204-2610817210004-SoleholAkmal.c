#include <stdio.h>

int main() {
    float radius, height;
    float phi = 22.0 / 7.0;
    float volume, surfaceArea, baseCircumference;

    printf("\nJari-Jari : ");
    scanf("%f", &radius);

    printf("Tinggi : ");
    scanf("%f", &height);

    volume = phi * radius * radius * height;
    surfaceArea = 2 * phi * radius * (radius + height);
    baseCircumference = 2 * phi * radius;

    printf("\nVolume = %.2f", volume);
    printf("\nLuas = %.2f", surfaceArea);
    printf("\nKeliling = %.2f\n\n", baseCircumference);

    return 0;
}