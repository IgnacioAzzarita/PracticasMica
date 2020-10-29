#include <stdio.h>
#include <stdlib.h>

void MostrarArray(int array[], int tam);
void MayorPosicion(int array[], int tam);
void MostrarArrayDecreciente(int array[], int tam);
void OrdenMayoraMenor (int array[],int tam);


int main()
{
    int array[10]={4,66,77,41,98,12,36,51,0,20};
    MayorPosicion(array,10);
    MostrarArray(array,10);
    MostrarArrayDecreciente(array,10);
    OrdenMayoraMenor(array,10);

}
void MostrarArray(int array[], int tam)
{
     int i;
     printf("\n\n");
     for(i=0;i<tam;i++)
    {
        printf("%d ",array[i]);
    }
}
void MayorPosicion(int array[], int tam)
{
    int i;
    int maximo;
    int posicion;

    for(i=0;i<tam;i++)
    {
        if(maximo==0 || array[i]>maximo)
        {
            maximo=array[i];
            posicion=i+1;//amigable al usuario
        }
    }
    printf("El numero mayor es %d y su posicion es %d \n",maximo,posicion);

}
void MostrarArrayDecreciente(int array[], int tam)
{
     int i;
     printf("\n\n");
     for(i=tam-1;i>=0;i--)
    {
        printf(" %d ",array[i]);
    }
}
void OrdenMayoraMenor (int array[],int tam)
{
    int i;
    int mayor;
    int menor;
    printf("\n\n");
    for(i=0;i<tam;i++)
    {

    {
        if(mayor==0 || array[i]>mayor)
        {
            mayor=array[i];
        }
        else if(menor=0 || array[i]<menor)
        {
            menor=array[i];
        }
    }
    printf("\n %d",array);
    }
}
/*
#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void mostrarVector(int vec[], int tam);
void buscarMayor(int vec[], int tam);
void mostrarVectorInvertido(int vec[], int tam);

void ordenarCreciente(int vec[], int tam);
void ordenarDecreciente(int vec[], int tam);
void ordenar(int vec[], int tam, int param);

int main()
{
    int numeros[TAM] = {1,2,3,4,5,6,7,8,9,10};
    int numeros2[TAM] = {15,24,3,45,500,64,71,8,9,10};

    buscarMayor(numeros, TAM);
    mostrarVector(numeros, TAM);
    mostrarVectorInvertido(numeros, TAM);
    ordenarCreciente(numeros2, TAM);
    ordenarDecreciente(numeros2, TAM);

    printf("\nLa funcion que ordena sola!!!\n");
    ordenar(numeros2, TAM, 0);

    return 0;
}

void mostrarVector(int vec[], int tam)
{
    printf("\n El vector de enteros: ");
    for(int i = 0; i < tam; i++)
    {
        printf("%d ", vec[i]);
    }
    printf("\n\n");
}

void buscarMayor(int vec[], int tam)
{
    int mayor = 0;
    int indiceMayor;
    for(int i = 0; i < tam; i++)
    {
        if(mayor == 0 || mayor < vec[i])
        {
            mayor = vec[i];
            indiceMayor = i;
        }
    }
    printf(" El numero mayor es %d y se encuentra la posicion %d\n\n", mayor, indiceMayor);
}

void mostrarVectorInvertido(int vec[], int tam)
{
    printf("\n El vector invertido: ");

    for(int i = tam-1; i > 0; i--)
    {
        printf("%d ", vec[i]);
    }

    printf("\n\n");
}

void ordenarCreciente(int vec[], int tam)
{
    int aux;
    for(int i = 0; i < tam-1; i++)
    {
        for(int j = i+1; j < tam; j++)
        {
            if(vec[i]>vec[j])
            {
                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }
        }
    }
    mostrarVector(vec, tam);
}

void ordenarDecreciente(int vec[], int tam)
{
    int aux;
    for(int i = 0; i < tam-1; i++)
    {
        for(int j = i+1; j < tam; j++)
        {
            if(vec[i]<vec[j])
            {
                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }
        }
    }
    mostrarVector(vec, tam);
}

void ordenar(int vec[], int tam, int param)
{
    int aux;

    if(param !=1 && param != 0){
        printf("\nOcurrio un error\n");
        return;
    }

    if(!param)
    {
        for(int i = 0; i < tam-1; i++)
        {
            for(int j = i+1; j < tam; j++)
            {
                if(vec[i]<vec[j])
                {
                    aux = vec[i];
                    vec[i] = vec[j];
                    vec[j] = aux;
                }
            }
        }
    }
    else
    {
        for(int i = 0; i < tam-1; i++)
        {
            for(int j = i+1; j < tam; j++)
            {
                if(vec[i]>vec[j])
                {
                    aux = vec[i];
                    vec[i] = vec[j];
                    vec[j] = aux;
                }
            }
        }
    }

    mostrarVector(vec, tam);
}
*/
