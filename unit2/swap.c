#include <stdio.h>
#include "/mnt/c/Users/quint/Documents/StructuredProgramming2A/unit2/folderTest/utils.h"

int main(){
    int ptr1, ptr2;
    printf("Set values for num1 and num2\n");
    scanf("%d%d", &ptr1, &ptr2);
    swap(&ptr1, &ptr2);
    printf("num1: %d and num2: %d\n", ptr1, ptr2);

    
    return 0;

}
