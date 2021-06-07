#include <stdio.h>

int
main()
{
  int numeros[50],j,total,i=0;
  int salir=0;
  
  while (salir!=1)
  {
    printf("\nIntroduzca un numero ");
    scanf("%d",&numeros[i]);
    i++;
    printf("\nPulse 1 para salir ");
    scanf("%d",&salir);
  }

  // Sumamos
  for (j=0;j<i;j++)
    total=total+numeros[j];

  printf("\nEl resultado es %d\n\n",total);  
  return 0;
}