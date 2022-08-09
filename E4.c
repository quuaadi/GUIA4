/*4) El usuario ingresa una palabra. 
Mostrar en pantalla cuántas letras A minúsculas contiene.*/

#include <stdio.h>

int main()
{   
    int i = 0;
    int j = 0;                
    int acum = 0; 
    char palabra[30]; 
    
   
    printf("Ingresar la primera palabra: ");               
    fgets(palabra , 30 , stdin);
    
     
     
     
      while (palabra[i++] != '\0');     
      
      for (j = 0 ; j < i ; j++)
      {
          if(palabra[j] == 'a')     
           {
             acum ++;  
           }
          
      }

    if (acum != 0)
     {
    printf("La palabra posee %d letras A minusculas",acum);   
     }
    else
    {
    printf("La palabra no posee letras A minusculas");
    }}