#include <stdio.h>

const int VACIO=0;
const int EQUIS=1;
const int CIRCULO=2;

void
main()
{
  int fila=0,col=0,tablero[3][3],turno=CIRCULO;

  for (fila=0;fila<3;fila++)
    for (col=0;col<3;col++)
      tablero[fila][col]=VACIO;

  while (1)
  {
    printf("\nFila: ");
    scanf("%d",&fila);
    printf("\nColumna: ");
    scanf("%d",&col);

    tablero[fila][col]=turno;
    if (turno==CIRCULO)
       turno=EQUIS;
    else 
       turno=CIRCULO;

    for (fila=0;fila<3;fila++)
    {
     for (col=0;col<3;col++)
      printf(" %d ",tablero[fila][col]);
      
     printf("\n"); 
    }
  }
}