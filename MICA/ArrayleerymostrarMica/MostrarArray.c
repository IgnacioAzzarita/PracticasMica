#include <stdio.h>
#include <stdlib.h>

void MostrarArray(int array[], int tam);
int main()
{
    int array[10]={1,66,77,41,98,12,36,51,0,10};

    MostrarArray(array,10);

}
void MostrarArray(int array[], int tam)
{
     int i;
     for(i=0;i<tam;i++)
    {
        printf("%d ",array[i]);
    }
}
