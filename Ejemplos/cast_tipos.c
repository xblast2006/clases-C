#include <stdio.h>

void
main()
{
   int i;
   float f;
   char c;

   printf("Introduzca un entero ");
   scanf("%d",&i);

   printf("\nIntroduzca un decimal ");
   scanf("%f",&f);  

   i=(int) f;
   c=(char) f;
   printf("\n Los numero son %d %.2f %c\n\n",i,f,c); 
}