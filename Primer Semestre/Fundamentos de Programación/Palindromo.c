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

//Palindromo
void Palindromo();

//Bubble Sort
void BubbleSort();


//declaracion variables
int bandera = 0;
int i, codigo = 8;

char opcmenu[20];




int main()
{
    do
    {
        LimpiarPantalla();
        MenuPrincipal(codigo);
        scanf("%s", &opcmenu);
        codigo = Validacion(opcmenu);
        switch (codigo)
        {
            case 1:
                Palindromo();
                break;
            case 2:
                BubbleSort();
                break;
            default:
                break;        
        }
    } 
    while (codigo != 0);
    printf("Gracias por usar el programa\n");
    printf("Hasta luego\n");
    

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
    
     if(opcmenu[0] != '0' && opcmenu[0] != '1' && opcmenu[0] != '2')
    {
        
        return 5; //codigo de error para menu incorrecto
    }
    switch (opcmenu[0])
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
void Palindromo()
{
    LimpiarPantalla();
    
    char texto[100];
    char textominusculas[100];
    int vocales = 0, espacios = 0, i, j = 0;
    bool palindromo = true;
    int longitud;

    printf("Bienvenido a la funcion palindromo\n");

    // Limpiar el búfer
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Ingrese un texto:\n");
    fgets(texto, 100, stdin);

    // Convertir a minúsculas y eliminar '\n' y espacios
    for (i = 0; texto[i] != '\0'; i++)
    {
        if (texto[i] != '\n' && texto[i] != ' ')
        {
            textominusculas[j] = tolower(texto[i]);
            j++;
        }
    }
    textominusculas[j] = '\0';
    longitud = j;

    for(i = 0; i < longitud; i++)
    {
        if(textominusculas[i] != textominusculas[longitud - i - 1])
        {
            palindromo = false;
        }
    }

   
    for (i = 0; texto[i] != '\0'; i++)
    {
        if (texto[i] == ' ')
            espacios++;

        char ch = tolower(texto[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            vocales++;
    }

  

    if(palindromo)
        printf("El texto es un palindromo\n", texto);
    else
        printf("El texto no es un palindromo\n", texto);

    printf("El texto tiene %d vocales\n", vocales);
    printf("El texto tiene %d espacios\n", espacios);
  

    Esperar();
}
void BubbleSort()
{

}
    
