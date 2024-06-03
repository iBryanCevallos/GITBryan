#include <stdio.h>

int main() {
    float largo, ancho, area, perimetro;

    // Solicitar las dimensiones del rectángulo al usuario
    printf("Ingrese el largo del rectángulo: ");
    scanf("%f", &largo);

    printf("Ingrese el ancho del rectángulo: ");
    scanf("%f", &ancho);

    // Calcular el área
    area = largo * ancho;

    // Calcular el perímetro
    perimetro = 2 * (largo + ancho);

    // Mostrar los resultados
    printf("El área del rectángulo es: %.2f\n", area);
    printf("El perímetro del rectángulo es: %.2f\n", perimetro);

    return 0;
}
