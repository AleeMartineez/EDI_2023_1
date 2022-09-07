#include <stdio.h>

int main() {

    int kilos;
    float precio;
    float total;
    float descuento;

    printf ("Kilos de manzana: ");
    scanf("%d", &kilos);
    printf ("Precio de manzana: ");
    scanf("%f", &precio);


    if(kilos > 0 && kilos <= 2){
        descuento = (kilos * precio);
    } else if (kilos > 2 && kilos <= 5){
        total = (kilos * precio);
        descuento = total * 0.10;
    } else if (kilos > 5 && kilos < 10) {
        total = (kilos * precio);
        descuento = total * 0.15;
    } else {
        total = (kilos * precio);
        descuento = total * 0.20;
    }

    printf("El total es: %f", descuento);

    return 0;
}
