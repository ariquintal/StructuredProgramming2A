#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include "/mnt/c/Users/quint/Documents/StructuredProgramming2A/unit2/folderTest/utils.h"
#include "stdbool.h"

void callToNumber(int number){
    //Logica compleja para llamar un numero//
    printf("Llamando al 911 %d...!\n", number);
}

void sendMessageToNumber(int number){
    
}

//Declarando
void SecurityCamera(void(*cb) (int number), int EmergencyNumber );
void SecurityCamera2();

int main(){

    //for(;;){
        SecurityCamera(callToNumber, 911);
        SecurityCamera( sendMessageToNumber, 911);
    //}
        



    return 0;
}
//Def
void SecurityCamera(void(*cb) (int number), int EmergencyNumber){
    //Logica Compleja//
    bool thief = true;
    if (thief){ //Si detecta ladron debe hacer algo
    //Ejecutar un Callback
        cb(EmergencyNumber);


    }


}

void SecurityCamera2(){

    callToNumber(999);

}