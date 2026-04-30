#include <stdio.h>
#include <string.h>

// Prototipo o firma de las funciones del programa
void imprimir(char[]);//Declarando string

// Definición o implementación de la función main
int main()
{
    char nombre[] = "Facultad de Ingenieria"; //string tiene eof 
    imprimir(nombre);
}

// Implementación de las funciones del programa
void imprimir(char s[])
{ 
    int tam;
    for ( tam=strlen(s)-1 ; tam>=0 ; tam--) //strlen pide el tamaño de string y resta el eof
        printf("%c", s[tam]);
    printf("\n");
}
