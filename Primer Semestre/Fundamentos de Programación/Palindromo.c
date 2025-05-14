#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>

//Declaraciones de funciones

//Limpia pantalla
void LimpiarPantalla();

//Menu Principal
void MenuPrincipal(int);

//Validacion del menu
int Validacion(char[]);

//Esperar
void Esperar();


//declaracion variables
int bandera = 0;
int i, codigo_error = 8;
char texto[100];
char opcmenu[20];




//Inicio Script
int main()
{
    do
    {
        LimpiarPantalla();
        MenuPrincipal(codigo_error);
        scanf("%s", &opcmenu);
        codigo_error = Validacion(opcmenu);
        
    } while (true);
    
    

	return 0;
}
int Validacion(char opcmenu[20])
{
    if(strlen(opcmenu) > 1)
    {
        return 3; //codigo de error para mas de un digito
    }
   
    for(i =0; i < strlen(opcmenu); i++)
    {
        if(!isdigit(opcmenu[i]))
        {
            return 4; //código de error para no numerico;
        }       
    }
    for(i =0; i < strlen(opcmenu); i++)
    {
        if(opcmenu[i] != '0' || opcmenu[i] != '1' || opcmenu[i] != '2')
        {
            
            return 5; //codigo de error para menu incorrecto
        }
        else
        {
            switch (opcmenu[i])
            {
                case '0':
                    return 0; //Opción para salir
                    break;
                case '1':
                    return 1; //Opcion palindromo
                    break;
                case '2':
                    return 2; //Opcion bubble sort
                    break;
            }
        }    
    }

}
void MenuPrincipal(int codigo_error)
{
    printf("Bienvenido al programa de palindromos\n");
    printf("0. Salir\n");
    printf("1. Palindromo\n");
    printf("2. Bubble Sort\n");
    printf("Seleccione una opcion: \n");
    if(codigo_error == 3)
    {
        printf("La opcion seleccionada, debe tener longitud de 1 caracter\n");
    }
    if(codigo_error == 4)
    {
        printf("La opcion seleccionada, debe ser un numero\n");
    }
    if(codigo_error == 5)
    {
        printf("La opcion seleccionada, se debe encontrar entre 0 y 2\n");
    }


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
    
