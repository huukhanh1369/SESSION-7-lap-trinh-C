#include<stdio.h>
int main()
{
    int array[5]= {1,7,3,9,5}, max=0,min=array[0];
    for (int i = 0; i < 5; i++)
    {
        if( max < array[i] )
        {
            max = array[i];
        }
    }
        for (int i = 1; i < 5; i++)
    {
        if( min > array[i] )
        {
            min = array[i];
        }
    }
    printf("so nho nhat la %d\n",min);
    printf("so lon nhat la %d", max);
    return 0;
}