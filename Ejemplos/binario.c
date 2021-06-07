#include <stdio.h>


int
main()
{
  int i,num,pos=0,nb[100];

  printf("Esciba un numero ");
  scanf("%d",&num);

  while(num>=2)
  {
	nb[pos]=num%2;
	num=num/2;
	pos++;
  }

  nb[pos]=num;

  for (i=pos;i>=0;i--)
    printf("%d",nb[i]);

  printf("\n\n");
  return(0);
}
