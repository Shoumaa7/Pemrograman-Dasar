#include <stdio.h>

int main() {
    float lap = 5;
    float distance = 14.0;

    float circumference = distance / lap;
    float radius = circumference / (2 * 3.14);

    printf("\nDiketahui:");
    printf("\nPak Dengklek mengelilingi taman = %.0f putaran", lap);
    printf("\nJarak tempuh pak Dengklek = %.0f kilometer\n", distance);
    printf("\nJawaban:");
    printf("\nJari-jari taman yang dikelilingi pak dengklek adalah %.2f\n\n", radius);

    return 0; 
}