/*8) El usuario ingresar� nombres de personas hasta que ingrese la palabra "FIN". 
No sabemos cu�ntos nombres ingresar�.
Luego de finalizar el ingreso, mostrar en pantalla cu�l es el primer nombre en orden 
alfab�tico de todos los ingresados.*/

#include <stdio.h>
#include <string.h>

int main()
{
      char primero[50];
      char final[5] = "FIN\n";          
      char ingresado[50];
     
      
   printf("Ingresar el primer nombre de la lista:");
   fgets(primero ,50 ,stdin);                                  
    
    do {                                                     
        printf("Ingresar el siguiente nombre de la lista:"); //do-while
           fgets(ingresado ,50,stdin);
           
        if(strcmp(ingresado, final) == 0)    
         break;
        
        if (strcmp (primero , ingresado) > 0 )              //do-while infinito
        {
        strcpy (primero , ingresado);           
        }
      
   } while (1);                                             //do-while
    
  
   printf("El primer nombre en orden alfab�tico es: %s ",primero);  
   
}