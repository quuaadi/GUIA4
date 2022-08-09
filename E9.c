/*
9) El usuario ingresará una palabra de hasta 10 letras. 
Se desea mostrarla en pantalla pero encriptada según el "Código César".
Esto consiste en reemplazar cada letra con la tercera consecutiva en el abecedario.
Por ejemplo, "CASA" se convierte en "FDVD".
Tener en cuenta que las últimas letras deben volver al inicio, por ejemplo la Y se convierte B.
Este mecanismo se utilizaba en el Imperio Romano.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char palabra[20];
    char letras[26]= {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k','l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v','w', 'x','y','z'};
    int i , j;
    
    printf("Ingresar texto a encriptar:");
    fgets(palabra,20,stdin);
    
    for (i = 0 ; i < strlen(palabra) ; i++) 
    {
        
        for(j = 0 ; j <= 26 ; j++ )
        {
            if(palabra[i] == letras[j]) 
            {
                int cod = (j + 3) % 26 ;     
                palabra[i] = letras[cod];
                break;
                
            }}}
    
     printf("El texto en Codigo Cesar %s", palabra) ;
}