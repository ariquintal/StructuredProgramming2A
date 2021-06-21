#include <stdio.h>
#include "/mnt/c/Users/quint/Documents/StructuredProgramming2A/unit2/folderTest/utils.h"
#include <stdlib.h>

int var1 = 10;
int var2 = 20;

int main (int argc, char** argv){
    printf("var1= %d, var2= %d\n", var1, var2);
    printf("Function was executed:\n");
    //Paso de argumentos por direccion//
    modifyVariables(var1, var2);
    printf("var1= %d, var2= %d\n", var1, var2);

    //Get the address of var1 and var2
    // & ="La dirreccion de" --> &x08879fb
    int * myptr1 = &var1;
    int * myptr2 = &var2;
    printf("addres var1: %p,\t address var2: %p\n", &var1, &var2  );

    printf("Pointer has modificated the var1:\n");
    //*myptr1 = "El valor de " --&x03789fb = x;
    *myptr1 = 20;

    printf("var1= %d, var2=%d\n", var1, var2);


    return 0;
}
