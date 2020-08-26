#include <stdio.h>

int main(){

    int var1;
    int var2;
    int var3;

    printf( "Ingresa el valor de var1: " );
    scanf("%d", &var1);

    printf( "\n Ingresa el valor de var2: " );
    scanf("%d", &var2);

    printf( "\n Ingresa el valor de var3: " );
    scanf("%d", &var3);

    if ( var1 > var2 ){
        if( var1 > var3 ){
            printf("var1 es el mayor");
        } else{
            printf("var 3 es el mayor");
        }
    } else{
        if ( var2 > var3 ){
            printf("var2 es el mayor");
        }else{
            printf("var 3 es el mayor");
        }
    }

}