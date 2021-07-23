#include <stdio.h>
#include <stdlib.h> 


int add;
int i;
float average;

int main( int argc, char** argv){
    for (i=1; i<argc; i++){
        add+= atoi(argv[i]);
        average = add/i;
    if (i == (argc-1)){
        printf("Average: %f\n", average);
    }

    }





    return 0;
}
