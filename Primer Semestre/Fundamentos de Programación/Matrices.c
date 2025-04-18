#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <stdbool.h>
#include <time.h>

//Declaraciones de funciones

//Limpia pantalla
void LimpiarPantalla();

//Esperar
void Esperar();

//Generar números Aleatorios (minimo, maximo)
int NumerosAleatorios(int, int);

//Inicializar la matriz con 0 de defecto
void InicializarMatricesDefecto();

//Generar menu Principal
void MenuPrincipal();

//declaracion variables
int i;
int j;

int MatrizA [3][3];
int MatrizB [3][3];
int MatrizC [3][3];



//Inicio Script
int Main()
{
	srand(time(NULL));
	InicializarMatricesDefecto();
	MenuPrincipal();	
	return 0;
}

int NumerosAleatorios (int minimo, int maximo)
{
	return rand()%((maximo+1)-minimo)+minimo;
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
    LimpiarPantalla();
}

void InicializarMatricesDefecto()
{
    for(i = 0; i<=2; ++i)
    {
        for (j = 0; j <= 2; j++)
        {
            MatrizA[i][j] = 0;
            MatrizB[i][j] = 0;
        }
        
    }
}
void MenuPrincipal()
{

}
