#include <stdio.h>

int main() {
    float total_compra, total_a_pagar;

    // Solicitar el total de la compra al usuario
    printf("Ingrese el total de la compra: ");
    scanf("%f", &total_compra);

    // Calcular el total a pagar con el descuento del 15%
    total_a_pagar = total_compra * 0.85;

    // Mostrar el total a pagar
    printf("El total a pagar después del descuento es: %.2f\n", total_a_pagar);

    return 0;
}
