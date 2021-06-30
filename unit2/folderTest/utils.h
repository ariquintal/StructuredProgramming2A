#include <stdio.h>
#include <stdlib.h>
#define pi 3.1416

typedef struct utils{
    int myInt; 
    void (*ShowIntAdress) (int* param);
    void (*ShowIntValueAdress) (int param);
    void (*modifyVariablesAddress) (int dir1, int* dir2, int multiplo );


}UTILS;

typedef struct Array
{
    int dirArray[2];
    float aFloat;
    float * aFloatPointer;

}Array;


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


//paso de argumentos por dirreccion//
void modifyVariables(int argumento1, int argumento2){
    argumento1 = argumento1*2;
    argumento2 = argumento2*2;
    return;
}

void ShowIntAdress(int* param){
    printf("address: %p\n", param);

}

void ShowIntValueAdress(int* param){
    printf("value: %ls\n", param);

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

void swap(int* ptr1, int*ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    return;
    




}

void fillArray( int array[], size_t tam){
    for (size_t i = 0; i < tam; i++)
    {
        array[i] = i*2;
    }
    return;
};



void printArray1D( int array[], size_t tam){

for (size_t i = 0; i < tam; i++)
    {
        printf("%i\n", array[i]);
    }
    return;
}

Array* returnArray(){
    //int unArreglo[5] = {1,5,6,7,8};
    Array* unArrayType = (Array*)malloc(sizeof(Array));
    printf("addres unArrayType = %p, unArrayType =%p \n", &unArrayType, unArrayType);
   
    unArrayType->dirArray[0] = 17;
    unArrayType->dirArray[1] = 15;
    //unArrayType->dirArray[1] = 10;
    return unArrayType;
}

Array otherFunction(){


}