/*6) El usuario ingresa una palabra. 
Determinar qué letra aparece mayor cantidad de veces. 
Para simplificar el problema, trabaje solo con mayúsculas.*/

#include <stdio.h>
#include <string.h>

int main () {
    int comp = 0;
    int pos = 0;
    int i , j;

    char palabra[40];
    char mayus[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int acum[26]= { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0};
    

    printf("Ingresar una palabra: ");             
    fgets(palabra ,40,stdin);

 

     for (j = 0 ; j < strlen(palabra) ; j++ )       //en este for recorro la palabra, strlen me ayuda a 
                                                    //saber la cantidad de letras ingresadas (maximo 40)
       { 
          for (int k = 0 ; k < 26 ; k++)
          {
             if (palabra[j] == mayus[k])       
              {
                  acum[k]++;
                
              }          
                
             if(acum[k] > comp)                 
              {
                comp = acum[k];
                pos = k;
              }
          }

    }
    printf("La letra que aparece mayor cantidad de veces es la letra %c",mayus[pos]);  
}