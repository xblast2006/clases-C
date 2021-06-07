#include <stdio.h>

int
mayor(int n1,int n2,int n3)
{
   if ((n1>n2) && (n1>n3))
     return n1;
     
   if ((n2>n1) && (n2>n3))
     return n2;
     
   return n3;
     
}

int
menor(int n1,int n2,int n3)
{
   if ((n1<n2) && (n1<n3))
     return n1;
     
   if ((n2<n1) && (n2<n3))
     return n2;
     
   return n3;
}

int
medio(int n1,int n2,int n3)
{
   if (((n1<n2) && (n1>n3)) || ((n1>n2) && (n1<n3)))
     return n1;
     
   if (((n2<n1) && (n2>n3)) || ((n2>n1) && (n2<n3)))
     return n2;
     
   return n3;
}

void
main()
{
  int n1,n2,n3,res;
  
  printf("Introduce un numero ");
  scanf("%d",&n1);	
  printf("\nIntroduce un numero ");
  scanf("%d",&n2);
  printf("\nIntroduce un numero ");
  scanf("%d",&n3);
  
  res=mayor(n1,n2,n3);
  printf("El numero mayor es %d\n",res);
  res=menor(n1,n2,n3);
  printf("El numero menor es %d\n",res);
  res=medio(n1,n2,n3);
  printf("El numero medio es %d\n",res);
}
