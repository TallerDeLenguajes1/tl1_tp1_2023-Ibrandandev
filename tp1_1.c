#include <stdio.h>

int main()
{
  int *pEdad, edad = 19;
  pEdad = &edad;

  printf("hola mundo \n");

  printf("Valor: %d \n", *pEdad);
  printf("Direccion de Memoria almacenada por el puntero: %d \n", pEdad);
  printf("Direccion de Memoria de la variable: %d \n", &edad);
  printf("Direccion de Memoria del puntero: %d \n", &pEdad);
  printf("Tamaño de memoria utilizado por la variable: %d\n", sizeof(edad));
  printf("Tamaño de memoria utilizado por el puntero: %d\n", sizeof(pEdad));

  return 0;
}