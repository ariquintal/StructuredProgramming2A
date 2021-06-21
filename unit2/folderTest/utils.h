#include <stdio.h>

#define pi 3.1416

int libInteger = 24;

void sayHello( char message[] ){
    printf( "%s\n", message);
}

void sayMyName( char message[] ){
    printf( "%s\n", message);
    return;
}

int addTwoNumbers( int argumento1, int argumento2){
    int result = argumento1 + argumento2;
    return result;
}

void modifyVariables( int argumento1, int argumento2 ){

    argumento1 = argumento1*2;
    argumento2 = argumento2*2;
    return;

}

//paso de argumentos por dirreccion//
void modifyVariablesAddress(int argumento1, int argumento2){
    argumento1 = argumento1*2;
    argumento2 = argumento2*2;
    return;
}

void ShowIntAdress(int* param){
    printf("address: %p\n", param);

}

void ShowIntValueAdress(int* param){
    printf("value: %i\n", param);

}

void modifyVariablesAddress( int* dir1, int* dir2, int multiplo){
    ShowIntAdress(dir1);
    ShowIntValueAdress(dir1);
    ShowIntAdress(dir2);
    ShowIntValueAdress(dir2);
    *dir1 = *dir1 * multiplo;
    *dir2 = *dir2 * multiplo;

    return;
}