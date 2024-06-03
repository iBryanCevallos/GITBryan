#include <stdio.h>

int main() {
    float parcial1, parcial2, parcial3, examen_final, trabajo_final;
    float promedio_parciales, calificacion_final;

    // Solicitar las notas al usuario
    printf("Ingrese la nota del primer parcial: ");
    scanf("%f", &parcial1);

    printf("Ingrese la nota del segundo parcial: ");
    scanf("%f", &parcial2);

    printf("Ingrese la nota del tercer parcial: ");
    scanf("%f", &parcial3);

    printf("Ingrese la nota del examen final: ");
    scanf("%f", &examen_final);

    printf("Ingrese la nota del trabajo final: ");
    scanf("%f", &trabajo_final);

    // Calcular el promedio de los parciales
    promedio_parciales = (parcial1 + parcial2 + parcial3) / 3.0;

    // Calcular la calificación final
    calificacion_final = (promedio_parciales * 0.55) + (examen_final * 0.30) + (trabajo_final * 0.15);

    // Mostrar la calificación final
    printf("La calificación final es: %.2f\n", calificacion_final);

    return 0;
}
