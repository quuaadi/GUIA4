/*3) El usuario ingresa dos strings. Mostrar en pantalla si son iguales o no, es decir, 
si tienen las mismas letras en las mismas posiciones.*/

#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    int acum = 0;
    char pal1[30]; 
    char pal2[30];
   
    printf("Ingresar la primera palabra a comparar: ");
    fgets(pal1 , 30 , stdin);
   
    printf("\nIngresar la segunda palabra a comparar: ");
    fgets(pal2 , 30 , stdin);
  
    
   
   
    while (pal1[i++] != '\0');  
    while (pal2[j++] != '\0');   

    if (i == j)
      {
          for (i = 0 ; i < j ; i++)
           {
               if (pal1[i] == pal2[i])      
                {
                    acum ++;
                }
           }
      }
    
    if (acum == j)    
     {
         printf("Las palabras son iguales");
     } 
    else                                               
     {
        printf("Las palabras son distintas");
     }
    
       
}