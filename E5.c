/*5) El usuario ingresa una palabra. 
Mostrar en pantalla cuántas vocales minúsculas y mayúsculas contiene.*/

#include <stdio.h>

int main()
{
    int j = 0;
    int acum1 = 0;
    int acum2 = 0;
    char palabra[30]; 
   
   
   
    printf("Ingresar la primera palabra:");    
    fgets(palabra , 30 , stdin);
    
     
     
     
      for (j = 0 ; j <= 30 && palabra[j] != '\0' ; j++); //recorro la palabra 
      
          for (int k = 0 ; k < j ; k++)   
          {
             if(palabra[k] == 'a' || palabra[k] ==palabra[k] == 'e' || palabra[k] =='i' || palabra[k] =='o' || palabra[k] =='u')
              {
                acum1++;
              }                 //comparo letra por letra con un for anidado
          
             if(palabra[k] == 'A' || palabra[k] == 'E' || palabra[k] == 'I' || palabra[k] =='O' || palabra[k] == 'U')
              {
                acum2++;
              }
          }
        
          
      if (acum1 != 0)     
     {
         printf("\n-La palabra posee %d vocales minusculas",acum1);
     }
    else
     {
        printf("\n-La palabra no posee vocales minusculas");
     }
                                                                            //si acum1/2 es = 0 
                                                                            //quiere decir que no tiene vocales
    if (acum2 != 0)      
     {
         printf("\n-La palabra posee %d vocales mayusculas",acum2);
     }
    else
     {
        printf("\n-La palabra no posee vocales mayusculas");
     }
}