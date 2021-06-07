#include <stdio.h>

void
main()
{
    int intentos=6;
    int num_correcto=10,num_usu=0;
    
    while (intentos>0)
    {
        printf("\nIntroduzca un numero\n");
        scanf("%d",&num_usu);

        intentos--;
        if (num_usu==num_correcto)
           printf("ACIERTO");
        else 
        {
           if (num_usu>num_correcto)
              printf("FALLO. Te pasaste\n");
           else
              printf("FALLO. Te quedaste corto\n");
           printf("Te quedan %d intentos\n",intentos);
        }
    }
}
