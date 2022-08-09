/*1) Permitir que el usuario ingrese una palabra de hasta 20 letras. Mostrar en pantalla cuántas letras tiene la palabra ingresada.
Por ejemplo "CASA" debe indicar 4 letras.*/

#include <stdio.h>
  int cantidad_letras();
  int letras;
int main()
{
  
   
   char palabra[20];
   
     printf("Ingresar una palabra:");
   
  letras = cantidad_letras (palabra); 
 
     printf("La palabra ingresada tiene %d letras" , letras);   
}
    
    
int cantidad_letras(int letras)     
{
  for (letras = 0 ; letras < 20 ; letras++)
       {
          char cant_letras;
          cant_letras = getchar();        
           
           if (cant_letras == '\n')  
           {
               return letras;
           }
       }
  

}