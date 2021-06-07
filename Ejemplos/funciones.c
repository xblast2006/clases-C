#include <stdio.h>



// funcion de menu
int
menu()
{
    int op;
    printf("1 - Suma\n");
    printf("2 - Resta\n");
    printf("3 - Multiplicacion\n");
    printf("4 - Division\n");
    printf("5 - Salir\n");
    printf("Opcion\n");
    scanf("%d",&op);

    return(op);
}

// funcion para leer numeros
int
lee_numeros()
{
   int v;
   printf("Introduzca numero ");
   scanf("%d",&v);
   return(v);
}

// Funcion de suma
int sumar()
{
   int n1,n2;

   n1=lee_numeros();
   n2=lee_numeros();
   
   return(n1+n2);
}

// Funcion de suma
int restar()
{
   int n1,n2;

   n1=lee_numeros();
   n2=lee_numeros();

   return(n1-n2);
}

// Funcion dividir
float div(int a,int b)
{
  a++;
  return(a/b);
}

// Programa principal
void
main()
{
    int i=0,op,n1,n2;

    while (1)
    {
      op=menu();

      // Sumar
      if (op==1)
      {
        printf("El resultado es %d\n",sumar());
      }

      // Restar
      if (op==2)
      {
        printf("El resultado es %d\n",restar());
      }

      // Multiplicar sin usar *
      if (op==3)
      {

      }

      // Dividir con parametros
      if (op==4)
      {
        n1=lee_numeros();
        n2=lee_numeros();
        printf("El resultado es %f\n",div(n1,n2));
      }
    }
}