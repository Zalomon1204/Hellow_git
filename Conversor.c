#include <stdio.h>

//Soy una cosa pero barbara//

//Conversor de variables//

double a;

int main(){
    printf("Ingrese un numero: menor a 256 por favor: ");
    scanf("%lf", &a);
    printf("El numero es : %.6f\n", a);
    
    int b = (int)a;
    char c = (char)a;
    printf("El numero redondeado es: %d\n", b);
    printf("El caracter correspondiente es: %c\n", c);
    return 0;

}