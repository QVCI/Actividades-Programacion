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

//Validar Input
bool ValidarInputMain(char);

//Suma y Resta de Matrices 
void Suma(int);

//Imprimir Todas las matrices
void ImprimirMatrices(int);


//declaracion variables
int i;
int j;

int MatrizA [3][3];
int MatrizB [3][3];
int MatrizC [3][3];



//Inicio Script
int main()
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
  
    char input;
    bool inputvalido = true;
    do
    {
        if (inputvalido)
        {
            LimpiarPantalla();
            printf("Menu Principal\n");
            printf("1. Inicializar Matriz A.\n");
            printf("2. Inicializar Matriz B.\n");
            printf("3. Suma (Matriz C = Matriz A + Matriz B).\n");
            printf("4. Resta (Matriz C = Matriz A - Matriz B).\n");
            printf("5. Multiplicacion (Matriz C = Matriz A * Matriz B).\n");
            printf("6. Salir.\n");
            printf("Seleccione una opcion:\n");
        }
        else
        {
            LimpiarPantalla();
            printf("Menu Principal\n");
            printf("1. Inicializar Matriz A.\n");
            printf("2. Inicializar Matriz B.\n");
            printf("3. Suma (Matriz C = Matriz A + Matriz B).\n");
            printf("4. Resta (Matriz C = Matriz A - Matriz B).\n");
            printf("5. Multiplicacion (Matriz C = Matriz A * Matriz B).\n");
            printf("6. Salir.\n");
            printf("Seleccione una opcion:\n");
            printf("Recuerde que solo se permiten numeros entre 1 y 6.\n");
        }
        scanf(" %c", &input);
        inputvalido = ValidarInputMain(input);
        switch (input)
        {
            case '1':
            //Inicializar Matriz A
            LimpiarPantalla();
            printf("Inicializando Matriz A...\n");
            printf("Matriz A:\n");
            for(i = 0; i <= 2; ++i)
            {
                for(j = 0; j <= 2; ++j)
                {
                    int numRandom = NumerosAleatorios(1,3);
                    MatrizA[i][j] = numRandom;
                    printf("%d  ", numRandom);
                }
                printf("\n");
            }
            Esperar();
            break;

            case '2':
            //Inicializar Matriz B
            LimpiarPantalla();
            printf("Inicializando Matriz B...\n");
            printf("Matriz B:\n");
            for(i = 0; i <= 2; ++i)
            {
                for(j = 0; j <= 2; ++j)
                {
                    int numRandom = NumerosAleatorios(1,3);
                    MatrizB[i][j] = numRandom;
                    printf("%d  ", numRandom);
                }
                printf("\n");
            }
            Esperar();
            break;

            case '3':
            //Suma matrices
            LimpiarPantalla();            
            Suma(1); //Neutro Multiplicativo
            Esperar();
            break;

            case '4':
            //Resta matrices
            LimpiarPantalla();            
            Suma(-1); //Neutro Multiplicativo (inverso)
            Esperar();
            break;

        }
            
       
         
    } while (input != '6');
    
}
void Suma(int Numero)
{
    for(i = 0; i <= 2; ++i)
    {
        for (j =0; j <= 2; ++j)
        {
            MatrizC[i][j] = MatrizA[i][j] + (Numero * MatrizB[i][j]);
        }
     
    } 
    ImprimirMatrices(Numero);

}
bool ValidarInputMain(char input)
{
    if (input == '1' || input == '2' || input == '3' || input == '4' || input == '5' || input == '6')
    {
        return true;
    }
    else
    {
        return false;
    }
}

void ImprimirMatrices(int Numero)
{
    printf("Matrices:\n");
    printf("     C               A               B\n");
    char operacion = '-';
    int k, l;
    if (Numero == 1)
    {
        operacion = '+';
    }
    


    //Fila
    for (i = 0; i <= 2; ++i)
    {
        int NumerosMatriz[9];
        int numerodematiz = 0;
        //Matriz
        for (j = 0; j <= 2; ++j)
        {
            //Columna
            for (k = 0; k <= 2; ++k)
            {
                switch (j)
                {
                case 0:
                    //Datos Matriz C
                    NumerosMatriz[numerodematiz] = MatrizC[i][k];
                    numerodematiz++;
                    break;
                
                case 1:
                    //Datos Matriz A
                    NumerosMatriz[numerodematiz] = MatrizA[i][k];
                    numerodematiz++;
                    break;    
                
                case 2:
                    //Datos Matriz B
                    NumerosMatriz[numerodematiz] = MatrizB[i][k];
                    numerodematiz++;
                    break;    
                }                
                
            }
        }

        for (l = 0; l <=8; ++l)
        {
            if (l == 2 || l == 5)
            {
                if (i != 1)
                {
                    if (NumerosMatriz[l] >=0)
                    {
                        printf(" %d      ", NumerosMatriz[l]);
                    }
                    else
                    {
                        printf("%d      ", NumerosMatriz[l]);
                    }
                                       
                }
                else
                {
                    if (l == 2)
                    {
                        
                        if (NumerosMatriz[l] >=0)
                        {
                            printf(" %d  =   ", NumerosMatriz[l]);
                        }
                        else
                        {
                            printf("%d  =   ", NumerosMatriz[l]);
                        }
                        



                        
                    }
                    else
                    {


                        if (NumerosMatriz[l] >=0)
                        {


                            printf(" %d  %c   ", NumerosMatriz[l], operacion);

                        }
                        else
                        {
                            printf("%d  %c   ", NumerosMatriz[l], operacion);
                        }



                        
                    }
                    
                }
                
                
            }
            else
            {


                
                if (NumerosMatriz[l] >=0)
                {


                    printf(" %d  ", NumerosMatriz[l]);

                }
                else
                {
                    printf("%d  ", NumerosMatriz[l]);
                }


                
            }
            
        }
        printf("\n");

        
        

    }
    
}
