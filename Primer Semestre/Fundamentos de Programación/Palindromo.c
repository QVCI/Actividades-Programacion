#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>

//Declaraciones de funciones

//Limpia pantalla
void LimpiarPantalla();

//Esperar
void Esperar();


//declaracion variables
int vocales;
int espacios;

char texto [80];




//Inicio Script
int main()
{
    while(true)
    {
        LimpiarPantalla();
        printf("Ingrese un texto para validar si es palindromo\n");
        fget 
        scanf("%s", texto);
        
        

    }

	return 0;
}
void LimpiarPantalla()
{
	system("cls");
}

void Esperar()
{
    int cerrar;
    printf("Presione cualquier numero para continuar\n");
    scanf("%d", &cerrar);
}
    
