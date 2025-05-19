#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>
 
int main()
{

    int numfactorial;
    int i;
    //Declaracion de funciones
    void factorialint(int, int);
    void factorialshort(int, short);
    void factorialfloat(int, float);
    void factorialdouble(int, double);
    void factoriallong_long(int, long long);
    printf("Ingrese el numero para calcular su factorial: ");
    scanf("%i", &numfactorial);
    printf("El factorial con int es:\n");
    factorialint(i, numfactorial);
    printf("El factorial con short es:\n");
    factorialshort(i, (short)numfactorial);
    printf("El factorial con float es:\n");
    factorialfloat(i, (float)numfactorial);
    printf("El factorial con double es:\n");
    factorialdouble(i, (double)numfactorial);
    printf("El factorial con long long es:\n");
    factoriallong_long(i, (long long)numfactorial);

   
    return 0;
}
void factorialint(int i, int numfactorial)
{
    
    for(i = numfactorial; i>=1; --i)
    {
        if (i == numfactorial)
        {
            printf("%i! = %i", i, i);
        }
        else
        {
            printf("*%i", i);
        }
        numfactorial = numfactorial * i;
        
    }
    if ((int)numfactorial <= 0)
    {
        printf(" = Desbordamiento\n");
    }
    else
    {
        printf(" = %i\n", numfactorial);
    }
    
}

void factorialshort(int i, short numfactorial)
{
   
    for(i = numfactorial; i>=1; --i)
    {
        if (i == numfactorial)
        {
            printf("%i! = %i", i, i);
        }
        else
        {
            printf("*%i", i);
        }
        numfactorial = numfactorial * i;
        
    }
    if ((int)numfactorial <= 0)
    {
        printf(" = Desbordamiento\n");
    }
    else
    {
        printf(" = %i\n", numfactorial);
    }
}

void factorialfloat(int i, float numfactorial)
{
   
    for(i = (int)numfactorial; i>=1; --i)
    {
        if (i == (int)numfactorial)
        {
            printf("%d! = %d", i, i);
        }
        else
        {
            printf("*%i", i);
        }
        numfactorial = numfactorial * (float)i;
        
    }
       if ((int)numfactorial <= 0)
    {
        printf(" = Desbordamiento\n");
    }
    else
    {
        printf(" = %.2f\n", numfactorial);
    }
  
}

void factorialdouble(int i, double numfactorial)
{
   
    for(i = (int)numfactorial; i>=1; --i)
    {
        if (i == (int)numfactorial)
        {
            printf("%d! = %d", i, i);
        }
        else
        {
            printf("*%i", i);
        }
        numfactorial = numfactorial * (float)i;
        
    }
    if ((int)numfactorial <= 0)
    {
        printf(" = Desbordamiento\n");
    }
    else
    {
        printf(" = %.2f\n", numfactorial);
    }
    
}


void factoriallong_long(int i, long long numfactorial)
{
   
    for(i = numfactorial; i>=1; --i)
    {
        if (i == numfactorial)
        {
            printf("%i! = %i", i, i);
        }
        else
        {
            printf("*%i", i);
        }
        numfactorial = numfactorial * i;
        
    }
       if ((int)numfactorial <= 0)
    {
        printf(" = Desbordamiento\n");
    }
    else
    {
        printf(" = %i\n", numfactorial);
    }
}