#include <stdio.h>

typedef struct
{
  int num;
  int cp;
  char nombre[50];	
} direccion;

typedef  struct
  {
    int telefono;
    char nombre[50];
    direccion dir;  
  } datos_persona;

int suma(int n1,int n2)
{
  datos_persona p1;
  return(n1+n2);	
}

int
main()
{
  datos_persona personas[50];

  personas[0].telefono=333333;
  personas[0].dir.cp=444444;
  
  
  
  return(1);
}
