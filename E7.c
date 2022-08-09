/*7) El usuario ingresará 5 nombres de personas y sus edades (número entero). 
Luego de finalizar el ingreso, muestre en pantalla el nombre de la persona más joven.
El ingreso se realiza de este modo: 
nombre y edad de la primera persona, luego nombre y edad de la segunda, etc...
Nota: no hay que almacenar todos los nombres y todas las notas.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char nombre[30];
    char nombrejoven[30];            
    int edad; 
    int joven;
    

    for (int i = 0 ; i < 5 ; i++)
     {
         printf("Ingresar el nombre de la persona %d:", i + 1);
         scanf("%s",nombre);                                                  
         
         printf("Ingresar la edad de la persona %d:",i + 1);
         scanf("%d",&edad);
                                    //guardo la edad del primero para poder empezar la comparacion
                                    //comparo el nombre ingresado y su edad con el cargado anteriormente y guardo el menor
     
         if (i==0)
          {
            joven=edad;                                        
            strcpy (nombrejoven,nombre );
          }
    
         if (edad<joven)
          {
            strcpy( nombrejoven,nombre );                 
            joven=edad;
          }
     
    }
   printf("El nombre de la persona mas joven es %s", nombrejoven);          
    
}