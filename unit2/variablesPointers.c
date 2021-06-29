#include <string.h>
#include <stdio.h>

#include "/mnt/c/Users/quint/Documents/StructuredProgramming2A/unit2/folderTest/utils.h"


int myInt = 4;
float myFloat = 3.1416;

int * pointerInt = &myInt;

int main(){

    printf("addres myInt = %p, myInt = %d \n", &myInt, myInt);
    printf("addres myFloat = %p, myFloat = %f \n", &myFloat, myFloat);
    printf("addres pointerInt = %p*, pointerInt = %p", &pointerInt, pointerInt);

    //Array myArray;
    Array* myArray  = returnArray();
    printf("%d\n", myArray->dirArray[1] );
    
    //maloc(), realloc(), calloc()

    return 0;

}