#include <stdio.h>


int factorial(int n)
{
  int res;
  
  if (n==1)
    return 1;
  else 
  {
    res=factorial(n-1)*n;
    return res;  
  }
}

void
main()
{
   int n;
   printf("Introduzca un numero ");
   scanf("%d",&n);

   printf("El factorial de %d es %d\n\n",n,factorial(n)); 

}