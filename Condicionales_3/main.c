#include <stdio.h>

int main() {
    int a;
    int b;
    int c;

    printf("Dame el primer lado: ");
    scanf("%d",&a);
    printf("Dame el segundo lado: ");
    scanf("%d",&b);
    printf("Dame el tercer lado: ");
    scanf("%d",&c);

    if (a == b && b == c){
        printf("Es un Triangulo Equilatero");
    } else if(a == b && b != c || b == c && c != c || c == a && a != b){
        printf("Es un Triangulo Isosceles");
    } else {
        printf("Es un Triangulo Escaleno");
    }

    return 0;
}
