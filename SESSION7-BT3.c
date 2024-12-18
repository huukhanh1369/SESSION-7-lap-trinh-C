#include<stdio.h>
int main()
{
    int array[5]= {1,7,3,9,5}, check = 0;
    for (int i = 0; i < 5; i++)
    {
        if( array[i] % 2 == 0)
        {
            printf("%d\n",array[i]);
            check = 1;
        }
    }
    if ( !check)
    {
        printf("mang khong co so chan");
    }
    return 0;
}