#include <stdio.h>
#include <string.h>

void
main()
{
  char nombre[50];

  printf("introduce un nombre\n");
  scanf("%s",nombre);

  for (int i=0;i<strlen(nombre);i++)
  {
	 printf("%c ",nombre[i]);
  }


}
