#include <stdio.h>

int a;

int main(){
    printf("Ingrese un numero que se repetira n veces y formara un cuadro: ");

    scanf("%d", &a);    

    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
               printf("%d", a);
        }
        printf("\n");
    }

    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
               printf("%d", a);
        }
        printf("\n");
    }
    
    return 0;
}