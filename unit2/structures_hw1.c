#include <stdio.h>


typedef struct coche{
    char* marca;
    char* modelo;
    char* color;
    int anio;
    int altura_mil;
    int anchura_mil;
    int largo_mil;
    int peso_kg;
    float tanque_lit;
    int pasajeros;
    int precio;

}COCHE;


int main(){
    COCHE coche = {"Honda", "Civic", "Acero", 2021,1416,1799,4653,1338,46.9,5,485900};
    printf("Marca: %s\n", coche.marca);
    printf("Modelo: %s\n", coche.modelo);
    printf("Color: %s\n", coche.color);
    printf("Año: %d\n", coche.anio);
    printf("Altura Total (milimetros): %d\n", coche.altura_mil);
    printf("Anchura Total (milimetros): %d\n", coche.anchura_mil);
    printf("Largo Total (milimetros): %d\n", coche.largo_mil);
    printf("Peso (kilogramos): %d\n", coche.peso_kg);
    printf("Capacidad de tanque: %f\n", coche.tanque_lit);
    printf("Capacidad de pasajeros: %d\n", coche.pasajeros);
    printf("Precio: %d\n", coche.precio);

    return 0;
}


