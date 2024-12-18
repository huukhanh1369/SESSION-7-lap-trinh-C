#include<stdio.h>
int main()
{
    int array[1000],i,n,sum = 0;
    printf("nhap vao n phan tu : ");
    scanf("%d",&n);
    for(int i = 0; i< n; i++)
    {
        printf("nhap phan tu array[%d] : ",i);
        scanf("%d",&array[i]);  
    }
    return 0;
}