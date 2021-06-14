#include <stdio.h>

const int VERDADERO=1;
const int FALSO=0;

// Devuelve 1 si es primo y 0 si no lo es
int es_primo(int n)
{
   int resto,i=n-1;

   while (i>1)
   {
     resto=n%i;

     if (resto==0)
        return FALSO;

     i--;
   }

   return VERDADERO;
}

void main()
{
   int n;
   while (1)
   {
     printf("Introduzca un numero ");
     scanf("%d",&n);

     if (es_primo(n)==VERDADERO)
      printf("El numero %d es primo\n\n",n);
     else
      printf("El numero %d no es primo\n\n",n);
   }
}