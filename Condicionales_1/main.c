#include <stdio.h>

int main() {

    int hora, minutos;

    printf("Dame una hora: ");
    scanf("%d", &hora);
    printf("Dame los minutos: ");
    scanf("%d", &minutos);

    if( hora >= 0 && hora <= 11 && minutos <=59){
        printf("Buenos Dias");
    } else if (hora >= 12 && hora <= 17 && minutos <=59){
        printf("Buenas Tardes");
    } else if (hora >= 18 && hora <= 23 && minutos <=59){
        printf("Buenas Noches");
    } else {
        printf("La hora no es va lida");

    }

    return 0;
}
