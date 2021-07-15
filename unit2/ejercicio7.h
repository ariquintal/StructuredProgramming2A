#include <stdio.h>
#include <stdlib.h>

typedef struct robot{
    char* name;
    char* type;
    float height;
    float weight;
    int degreesOfFreedom;
    void (*sayHelloToRobot)(struct robot);

}ROBOT;

void sayHelloToRobot(ROBOT n_robot){
    printf( "hello Tiago");
    scanf("%s", n_robot.name);
}