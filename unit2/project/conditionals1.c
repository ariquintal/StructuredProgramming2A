#include <stdio.h>



int main(){
    char username;
    int age;
    int range = 18;

    printf("Enter your username:");
    scanf("%s", &username);

    printf("Enter your age:");
    scanf("%d", &age);

    if (age < range){
        printf("Sorry, you don't have access, you need to be 18 years or older\n");
    }
    else{
        printf("Welcome, you have full access\n");
    }




    return 0;
}
