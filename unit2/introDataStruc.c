#include <stdio.h>
#include <string.h>
#include <stdio.h>

#include "/mnt/c/Users/quint/Documents/StructuredProgramming2A/unit2/folderTest/utils.h"

//arrays
int myIntArray[5];
typedef struct mago{
    int vida;
    int mana;
    char* nombre;
    //mas atributos//
    //Say hello
    void (*Saludo) (char message[]);
    int (*sumaDosNumeros) (int argumento1, int argumento2);

}Mago;

///typedef struct mago Mago;///

struct Array
{
    int* dirArray;

};


int main(){

    Mago ari = { 100, 100, "Ari", sayHello};
    struct mago benji = {200, 200, "Benji"};
    

    printf("%s\n", ari.nombre );
    ari.Saludo("Hola, soy un mago!");
    ari.sumaDosNumeros(20,25);

    fillArray( myIntArray, 5);
    printArray1D( myIntArray, 5);
    printf("%d", myIntArray[0]);
    printf("%d", myIntArray[1]);
    printf("%d", myIntArray[2]);
    printf("%d", myIntArray[3]);
    printf("%d", myIntArray[4]);

    Array* myArray = returnArray();
    printf("%p", myArray->dirArray);

    return 0;
}