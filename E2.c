/*2) Permitir el ingreso de una palabra y mostrarla en pantalla al revés.
Por ejemplo, para "CASA" se debe mostrar "ASAC".*/

#include <stdio.h>

int main()
{
   
   char palabra[20];  
   
   printf("Ingresar una palabra:");   
   fgets(palabra ,20,stdin);
   
   int i = 0;
   
   while (palabra[i++] != '\0');  
    
       printf ("La palabra escrita al reves es:");
    
   while (i >= 0)  
       
        printf("%c",palabra[i--]);  
}