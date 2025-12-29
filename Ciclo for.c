#include <stdio.h>

int a;

int main(){
    printf("Ingrese un numero que se repetira n veces: ");

    scanf("%d", &a);

    for(int i = 0; i < a; i++){
        printf("%d\n", a);
    }s
    return 0;
}