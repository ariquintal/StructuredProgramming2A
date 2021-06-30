#include <stdio.h>
#include <string.h>
#include <stdio.h>

#include "/mnt/c/Users/quint/Documents/StructuredProgramming2A/unit2/folderTest/utils.h"



int main(int argc, char** argv){


    UTILS myStructC = {1, ShowIntAdress, ShowIntValueAdress, modifyVariablesAddress};
    printf("myInt = %d. &myStructC = %p\n", myStructC.myInt, &myStructC);
    UTILS* myStructP = &myStructC;

    printf("myInt = %d\n", (*myStructP).myInt);
    printf("myInt = %d\n", myStructP->myInt);

    return 0;
}