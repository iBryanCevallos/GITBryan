#include <stdio.h>

int main() {
    float salario_anterior, nuevo_salario;

    // Solicitar el salario anterior al usuario
    printf("Ingrese el salario anterior: ");
    scanf("%f", &salario_anterior);

    // Calcular el nuevo salario con el incremento del 25%
    nuevo_salario = salario_anterior * 1.25;

    // Mostrar el nuevo salario
    printf("El nuevo salario es: %.2f\n", nuevo_salario);

    return 0;
}
